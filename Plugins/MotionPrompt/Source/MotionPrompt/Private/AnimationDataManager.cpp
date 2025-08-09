#include "AnimationDataManager.h"
#include "Animation/Skeleton.h"
#include "Animation/AnimTypes.h"
#include "Engine/SkeletalMesh.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "Animation/AnimSequence.h"

#define LOCTEXT_NAMESPACE "AnimationDataManager"


void UAnimationDataManager::LoadPromptAnimationFromJSONString(const FString& JSONString)
{
	TSharedPtr<FJsonObject> RootObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JSONString);

	if (!FJsonSerializer::Deserialize(Reader, RootObject) || !RootObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to parse JSON from input string."));
		return;
	}

	// Clear any previous animation data
	PromptAnimationData.Frames.Empty();

	// Parse sequence length
	if (RootObject->HasTypedField<EJson::Number>("SequenceLength"))
	{
		PromptAnimationData.SequenceLength = RootObject->GetNumberField("SequenceLength");
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("⚠️ 'SequenceLength' missing. Defaulting to 0."));
		PromptAnimationData.SequenceLength = 0.f;
	}

	// Parse frames
	const TArray<TSharedPtr<FJsonValue>>* FramesArray;
	if (!RootObject->TryGetArrayField("Frames", FramesArray))
	{
		UE_LOG(LogTemp, Error, TEXT("❌ No 'Frames' array found in JSON."));
		return;
	}

	for (const TSharedPtr<FJsonValue>& FrameValue : *FramesArray)
	{
		const TSharedPtr<FJsonObject> FrameObj = FrameValue->AsObject();
		if (!FrameObj.IsValid()) continue;

		FPromptFrame Frame;

		const TSharedPtr<FJsonObject>* BonesObject;
		if (!FrameObj->TryGetObjectField("TPoseBonesAndRotations", BonesObject)) continue;

		for (const auto& BonePair : (*BonesObject)->Values)
		{
			const FString BoneName = BonePair.Key;
			const TSharedPtr<FJsonObject> BoneDataObj = BonePair.Value->AsObject();
			if (!BoneDataObj.IsValid()) continue;

			FPromptBoneData BoneData;
			BoneData.Parent = BoneDataObj->GetStringField("Parent");

			const TSharedPtr<FJsonObject>* TransformObj;
			if (BoneDataObj->TryGetObjectField("Transform", TransformObj))
			{
				const TSharedPtr<FJsonObject>& T = *TransformObj;

				const TSharedPtr<FJsonObject>* Loc, * Rot, * Scl;
				if (T->TryGetObjectField("Location", Loc))
				{
					BoneData.Transform.SetLocation(FVector(
						(*Loc)->GetNumberField("X"),
						(*Loc)->GetNumberField("Y"),
						(*Loc)->GetNumberField("Z")
					));
				}
				if (T->TryGetObjectField("Rotation", Rot))
				{
					BoneData.Transform.SetRotation(FQuat(FRotator(
						(*Rot)->GetNumberField("Pitch"),
						(*Rot)->GetNumberField("Yaw"),
						(*Rot)->GetNumberField("Roll")
					)));
				}
				if (T->TryGetObjectField("Scale", Scl))
				{
					BoneData.Transform.SetScale3D(FVector(
						(*Scl)->GetNumberField("X"),
						(*Scl)->GetNumberField("Y"),
						(*Scl)->GetNumberField("Z")
					));
				}
			}

			Frame.PoseBonesAndRotations.Add(BoneName, BoneData);
		}

		PromptAnimationData.Frames.Add(Frame);
	}

	UE_LOG(LogTemp, Log, TEXT("✅ Loaded %d frame(s) from JSON string."), PromptAnimationData.Frames.Num());
}


void UAnimationDataManager::ParseTPose()
{
	if (!Mesh)
	{
		UE_LOG(LogTemp, Warning, TEXT("ParseTPose: Mesh is null"));
		return;
	}

	const FReferenceSkeleton& RefSkeleton = Mesh->GetRefSkeleton();
	const TArray<FTransform>& RefPose = RefSkeleton.GetRefBonePose();

	int32 BoneCount = RefSkeleton.GetNum();
	TPoseAnimationData.PoseBonesAndRotations.Empty();

	for (int32 BoneIndex = 0; BoneIndex < BoneCount; ++BoneIndex)
	{
		const FName BoneName = RefSkeleton.GetBoneName(BoneIndex);
		const FTransform& LocalTransform = RefPose[BoneIndex];

		int32 ParentIndex = RefSkeleton.GetParentIndex(BoneIndex);

		// Fill data structure using local (bone-space) transform
		FPromptBoneData BoneData;
		BoneData.Transform = LocalTransform;
		BoneData.Parent = (ParentIndex != INDEX_NONE)
			? RefSkeleton.GetBoneName(ParentIndex).ToString()
			: "None";

		TPoseAnimationData.PoseBonesAndRotations.Add(BoneName.ToString(), BoneData);
	}

	UE_LOG(LogTemp, Log, TEXT("ParseTPose: Parsed %d bones with local (bone space) transforms from SkeletalMesh '%s'"), BoneCount, *Mesh->GetName());
}



void UAnimationDataManager::ExportBaseAnimationToJSON()
{
	if (!BaseAnimationSource)
	{
		UE_LOG(LogTemp, Error, TEXT("No animation asset provided."));
		return;
	}

	const float SequenceLength = BaseAnimationSource->GetPlayLength();
	const int32 NumFrames = BaseAnimationSource->GetNumberOfFrames();
	const float FrameRate = NumFrames / SequenceLength;

	FPromptAnimation ExportedAnim;
	ExportedAnim.SequenceLength = SequenceLength;

	// Get DataModel interface (UE5+)
	IAnimationDataModel* DataModel = const_cast<UAnimSequence*>(BaseAnimationSource)->GetDataModel();
	if (!DataModel)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to get data model from animation."));
		return;
	}
	
	const TArray<FBoneAnimationTrack>& BoneTracks = DataModel->GetBoneAnimationTracks();

	for (int32 FrameIndex = 0; FrameIndex < NumFrames; ++FrameIndex)
	{
		FPromptFrame Frame;

		for (const FBoneAnimationTrack& Track : BoneTracks)
		{
			FPromptBoneData BoneData;
			BoneData.Parent = TEXT("None"); // No direct parent info available here

			const int32 MaxIndex = FMath::Min3(
				Track.InternalTrackData.PosKeys.Num(),
				Track.InternalTrackData.RotKeys.Num(),
				Track.InternalTrackData.ScaleKeys.Num());

			int32 KeyIndex = FMath::Min(FrameIndex, MaxIndex - 1);

			FVector Pos = Track.InternalTrackData.PosKeys.IsValidIndex(KeyIndex) ? FVector(Track.InternalTrackData.PosKeys[KeyIndex]) : FVector::ZeroVector;
			FQuat Rot = Track.InternalTrackData.RotKeys.IsValidIndex(KeyIndex) ? FQuat(Track.InternalTrackData.RotKeys[KeyIndex]) : FQuat::Identity;
			FVector Scl = Track.InternalTrackData.ScaleKeys.IsValidIndex(KeyIndex) ? FVector(Track.InternalTrackData.ScaleKeys[KeyIndex]) : FVector::OneVector;

			BoneData.Transform.SetLocation(Pos);
			BoneData.Transform.SetRotation(Rot);
			BoneData.Transform.SetScale3D(Scl);

			Frame.PoseBonesAndRotations.Add(Track.Name.ToString(), BoneData);
		}

		ExportedAnim.Frames.Add(Frame);
	}

	// Serialize
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	TSharedPtr<FJsonObject> RootObject = MakeShared<FJsonObject>();
	RootObject->SetNumberField("SequenceLength", ExportedAnim.SequenceLength);

	TArray<TSharedPtr<FJsonValue>> JsonFrames;

	for (const FPromptFrame& Frame : ExportedAnim.Frames)
	{
		TSharedPtr<FJsonObject> JsonFrame = MakeShared<FJsonObject>();
		TSharedPtr<FJsonObject> JsonBones = MakeShared<FJsonObject>();

		for (const auto& Pair : Frame.PoseBonesAndRotations)
		{
			TSharedPtr<FJsonObject> BoneObj = MakeShared<FJsonObject>();
			BoneObj->SetStringField("Parent", Pair.Value.Parent);

			TSharedPtr<FJsonObject> T = MakeShared<FJsonObject>();
			const FTransform& Tr = Pair.Value.Transform;

			TSharedPtr<FJsonObject> Loc = MakeShared<FJsonObject>();
			TSharedPtr<FJsonObject> Rot = MakeShared<FJsonObject>();
			TSharedPtr<FJsonObject> Scl = MakeShared<FJsonObject>();

			const FVector L = Tr.GetLocation();
			const FRotator R = Tr.GetRotation().Rotator();
			const FVector S = Tr.GetScale3D();

			Loc->SetNumberField("X", L.X);
			Loc->SetNumberField("Y", L.Y);
			Loc->SetNumberField("Z", L.Z);

			Rot->SetNumberField("Pitch", R.Pitch);
			Rot->SetNumberField("Yaw", R.Yaw);
			Rot->SetNumberField("Roll", R.Roll);

			Scl->SetNumberField("X", S.X);
			Scl->SetNumberField("Y", S.Y);
			Scl->SetNumberField("Z", S.Z);

			T->SetObjectField("Location", Loc);
			T->SetObjectField("Rotation", Rot);
			T->SetObjectField("Scale", Scl);

			BoneObj->SetObjectField("Transform", T);
			JsonBones->SetObjectField(Pair.Key, BoneObj);
		}

		JsonFrame->SetObjectField("TPoseBonesAndRotations", JsonBones);
		JsonFrames.Add(MakeShared<FJsonValueObject>(JsonFrame));
	}

	RootObject->SetArrayField("Frames", JsonFrames);
	FJsonSerializer::Serialize(RootObject.ToSharedRef(), Writer);

	const FString SavePath = FPaths::ProjectSavedDir() / TEXT("BaseAnimationData.json");

	if (FFileHelper::SaveStringToFile(OutputString, *SavePath))
	{
		UE_LOG(LogTemp, Log, TEXT("✅ Successfully exported animation to %s"), *SavePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to save animation JSON to %s"), *SavePath);
	}
}



void UAnimationDataManager::ExportTPoseData(FString Path)
{
	if (TPoseAnimationData.PoseBonesAndRotations.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("ExportTPoseData: No bone data to export."));
		return;
	}

	TSharedRef<FJsonObject> RootObject = MakeShared<FJsonObject>();

	// Add sequence length = 0.0 for a single frame T-pose
	RootObject->SetNumberField("SequenceLength", 0.0);

	// Prepare the single frame
	TSharedRef<FJsonObject> FrameObject = MakeShared<FJsonObject>();
	TSharedRef<FJsonObject> BonesObject = MakeShared<FJsonObject>();

	for (const TPair<FString, FPromptBoneData>& Pair : TPoseAnimationData.PoseBonesAndRotations)
	{
		const FString& BoneName = Pair.Key;
		const FTransform& Transform = Pair.Value.Transform;
		const FString& ParentName = Pair.Value.Parent;

		TSharedRef<FJsonObject> BoneData = MakeShared<FJsonObject>();
		BoneData->SetStringField("Parent", ParentName);

		// Location
		TSharedRef<FJsonObject> Loc = MakeShared<FJsonObject>();
		Loc->SetNumberField("X", Transform.GetLocation().X);
		Loc->SetNumberField("Y", Transform.GetLocation().Y);
		Loc->SetNumberField("Z", Transform.GetLocation().Z);

		// Rotation
		const FRotator Rotator = Transform.Rotator();
		TSharedRef<FJsonObject> Rot = MakeShared<FJsonObject>();
		Rot->SetNumberField("Pitch", Rotator.Pitch);
		Rot->SetNumberField("Yaw", Rotator.Yaw);
		Rot->SetNumberField("Roll", Rotator.Roll);

		// Scale
		TSharedRef<FJsonObject> Scl = MakeShared<FJsonObject>();
		Scl->SetNumberField("X", Transform.GetScale3D().X);
		Scl->SetNumberField("Y", Transform.GetScale3D().Y);
		Scl->SetNumberField("Z", Transform.GetScale3D().Z);

		// Wrap in Transform
		TSharedRef<FJsonObject> TransformObject = MakeShared<FJsonObject>();
		TransformObject->SetObjectField("Location", Loc);
		TransformObject->SetObjectField("Rotation", Rot);
		TransformObject->SetObjectField("Scale", Scl);

		BoneData->SetObjectField("Transform", TransformObject);

		// Add this bone
		BonesObject->SetObjectField(BoneName, BoneData);
	}

	FrameObject->SetObjectField("TPoseBonesAndRotations", BonesObject);

	// Add this single frame to a frames array
	TArray<TSharedPtr<FJsonValue>> FramesArray;
	FramesArray.Add(MakeShared<FJsonValueObject>(FrameObject));
	RootObject->SetArrayField("Frames", FramesArray);

	// Serialize JSON
	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	if (!FJsonSerializer::Serialize(RootObject, Writer))
	{
		UE_LOG(LogTemp, Error, TEXT("ExportTPoseData: Failed to serialize JSON."));
		return;
	}

	// Save
	const FString SavePath = Path / TEXT("TPoseData.json");
	if (FFileHelper::SaveStringToFile(OutputString, *SavePath))
	{
		UE_LOG(LogTemp, Log, TEXT("ExportTPoseData: Successfully saved to %s"), *SavePath);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("ExportTPoseData: Failed to save file."));
	}
}


void UAnimationDataManager::LoadPromptAnimationFromJSON(const FString& FullPath)
{
	

	FString FileContents;
	if (!FFileHelper::LoadFileToString(FileContents, *FullPath))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load file: %s"), *FullPath);
		return;
	}

	TSharedPtr<FJsonObject> RootObject;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(FileContents);

	if (!FJsonSerializer::Deserialize(Reader, RootObject) || !RootObject.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to parse JSON from: %s"), *FullPath);
		return;
	}

	// Clear existing
	PromptAnimationData.Frames.Empty();

	// Sequence length
	PromptAnimationData.SequenceLength = RootObject->GetNumberField("SequenceLength");

	const TArray<TSharedPtr<FJsonValue>>* FramesArray;
	if (!RootObject->TryGetArrayField("Frames", FramesArray))
	{
		UE_LOG(LogTemp, Error, TEXT("No 'Frames' array found in JSON."));
		return;
	}

	for (const TSharedPtr<FJsonValue>& FrameValue : *FramesArray)
	{
		FPromptFrame Frame;
		TSharedPtr<FJsonObject> FrameObj = FrameValue->AsObject();
		if (!FrameObj.IsValid()) continue;

		const TSharedPtr<FJsonObject>* BonesObject;
		if (!FrameObj->TryGetObjectField("TPoseBonesAndRotations", BonesObject)) continue;

		for (const auto& BonePair : (*BonesObject)->Values)
		{
			FString BoneName = BonePair.Key;
			const TSharedPtr<FJsonObject> BoneDataObj = BonePair.Value->AsObject();
			if (!BoneDataObj.IsValid()) continue;

			FPromptBoneData BoneData;
			BoneData.Parent = BoneDataObj->GetStringField("Parent");

			const TSharedPtr<FJsonObject>* TransformObj;
			if (BoneDataObj->TryGetObjectField("Transform", TransformObj))
			{
				const TSharedPtr<FJsonObject>& T = *TransformObj;

				const TSharedPtr<FJsonObject>* Loc, * Rot, * Scl;
				if (T->TryGetObjectField("Location", Loc))
				{
					BoneData.Transform.SetLocation(FVector(
						(*Loc)->GetNumberField("X"),
						(*Loc)->GetNumberField("Y"),
						(*Loc)->GetNumberField("Z")
					));
				}
				if (T->TryGetObjectField("Rotation", Rot))
				{
					BoneData.Transform.SetRotation(FQuat(FRotator(
						(*Rot)->GetNumberField("Pitch"),
						(*Rot)->GetNumberField("Yaw"),
						(*Rot)->GetNumberField("Roll")
					)));
				}
				if (T->TryGetObjectField("Scale", Scl))
				{
					BoneData.Transform.SetScale3D(FVector(
						(*Scl)->GetNumberField("X"),
						(*Scl)->GetNumberField("Y"),
						(*Scl)->GetNumberField("Z")
					));
				}
			}

			Frame.PoseBonesAndRotations.Add(BoneName, BoneData);
		}

		PromptAnimationData.Frames.Add(Frame);
	}

	UE_LOG(LogTemp, Log, TEXT("Successfully loaded %d frames from %s"), PromptAnimationData.Frames.Num(), *FullPath);
}


#if WITH_EDITOR
#include "Animation/AnimSequence.h"
#include "PackageTools.h"
#include "C:\Program Files\Epic Games\UE_5.3\Engine\Source\Runtime\AssetRegistry\Public\AssetRegistry\AssetRegistryModule.h"
#include "C:\Program Files\Epic Games\UE_5.3\Engine\Plugins\Editor\EditorScriptingUtilities\Source\EditorScriptingUtilities\Public\EditorAssetLibrary.h"
#include "AssetToolsModule.h"
#include "IAssetTools.h"

void UAnimationDataManager::BakeAnimationToAsset(const FString& AssetName, const FString& TargetFolder)
{
	if (!Mesh)
	{
		UE_LOG(LogTemp, Error, TEXT("No skeletal mesh assigned."));
		return;
	}

	if (PromptAnimationData.Frames.Num() < 2)
	{
		UE_LOG(LogTemp, Error, TEXT("Not enough frames to bake."));
		return;
	}

	// Step 1: Create and sanitize package path
	FString PackagePath = TargetFolder.StartsWith(TEXT("/")) ? TargetFolder : TEXT("/Game/") + TargetFolder;
	if (!PackagePath.StartsWith(TEXT("/Game")))
	{
		PackagePath = TEXT("/Game") + PackagePath;
	}
	FString FullPath = PackagePath / AssetName;
	FString SanitizedPath = PackageTools::SanitizePackageName(FullPath);

	UPackage* Package = CreatePackage(*SanitizedPath);
	if (!Package)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create package for %s"), *SanitizedPath);
		return;
	}

	// Step 2: Create AnimSequence
	UAnimSequence* NewAnim = NewObject<UAnimSequence>(Package, *AssetName, RF_Public | RF_Standalone | RF_MarkAsRootSet);
	if (!NewAnim)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create animation asset."));
		return;
	}

	NewAnim->SetSkeleton(Mesh->GetSkeleton());
	NewAnim->SetPreviewMesh(Mesh);

	NewAnim->ImportFileFramerate = 30.0f;
	NewAnim->ResetAnimation();
	NewAnim->Modify(true);

	// Step 3: Bake each bone track
	TArray<FString> BoneNames;
	PromptAnimationData.Frames[0].PoseBonesAndRotations.GetKeys(BoneNames);

	IAnimationDataController& Controller = NewAnim->GetController();
	Controller.OpenBracket(LOCTEXT("BakeAnimation", "Baking Animation"));

	for (const FString& BoneName : BoneNames)
	{
		FRawAnimSequenceTrack Track;

		for (const FPromptFrame& Frame : PromptAnimationData.Frames)
		{
			const FPromptBoneData* BoneData = Frame.PoseBonesAndRotations.Find(BoneName);
			if (!BoneData)
			{
				Track.PosKeys.Add(FVector3f::ZeroVector);
				Track.RotKeys.Add(FQuat4f::Identity);
				Track.ScaleKeys.Add(FVector3f::OneVector);
				continue;
			}

			if (BoneData->Transform.GetLocation().ContainsNaN() ||
				BoneData->Transform.GetScale3D().ContainsNaN() ||
				BoneData->Transform.GetRotation().ContainsNaN())
			{
				UE_LOG(LogTemp, Warning, TEXT("Skipping invalid transform in bone: %s"), *BoneName);
				Track.PosKeys.Add(FVector3f::ZeroVector);
				Track.RotKeys.Add(FQuat4f::Identity);
				Track.ScaleKeys.Add(FVector3f::OneVector);
				continue;
			}

			Track.PosKeys.Add(FVector3f(BoneData->Transform.GetLocation()));
			Track.RotKeys.Add(FQuat4f(BoneData->Transform.GetRotation()));
			Track.ScaleKeys.Add(FVector3f(BoneData->Transform.GetScale3D()));
		}

		if (Track.PosKeys.Num() > 0 &&
			Track.PosKeys.Num() == Track.RotKeys.Num() &&
			Track.PosKeys.Num() == Track.ScaleKeys.Num())
		{
			//Controller.AddBoneTrack(FName(*BoneName));
			//Controller.SetBoneTrackKeys(FName(*BoneName), Track.PosKeys, Track.RotKeys, Track.ScaleKeys);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Skipping bone %s due to mismatched key count"), *BoneName);
		}
	}

	Controller.CloseBracket();

	// Step 4: Save package
	NewAnim->PostEditChange();
	NewAnim->MarkPackageDirty();
	Package->MarkPackageDirty();

	const FString PackageFileName = FPackageName::LongPackageNameToFilename(SanitizedPath, FPackageName::GetAssetPackageExtension());

	bool bSaved = UPackage::SavePackage(
		Package,
		NewAnim,
		EObjectFlags::RF_Public | EObjectFlags::RF_Standalone,
		*PackageFileName,
		GError,
		nullptr,
		true,
		true,
		SAVE_None
	);

	if (bSaved)
	{
		UE_LOG(LogTemp, Log, TEXT("✅ Asset saved successfully to %s"), *PackageFileName);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to save asset to %s"), *PackageFileName);
	}
}




void UAnimationDataManager::OverwriteExistingAnimationAsset(const FString& AssetPath)
{
	// Step 1: Load the animation asset
	UAnimSequence* Anim = LoadObject<UAnimSequence>(nullptr, *AssetPath);
	if (!Anim)
	{
		UE_LOG(LogTemp, Error, TEXT("❌ Failed to load animation asset at path: %s"), *AssetPath);
		return;
	}

	if (!Mesh)
	{
		UE_LOG(LogTemp, Error, TEXT("No skeletal mesh assigned."));
		return;
	}

	if (PromptAnimationData.Frames.Num() < 1)
	{
		UE_LOG(LogTemp, Error, TEXT("Not enough frames in PromptAnimationData."));
		return;
	}

	// Step 2: Reset and reinitialize
	Anim->ResetAnimation();
	Anim->Modify(true);
	Anim->SetSkeleton(Mesh->GetSkeleton());
	Anim->SetPreviewMesh(Mesh);
	Anim->ImportFileFramerate = 30.0f;

	// Step 3: Begin animation update
	IAnimationDataController& Controller = Anim->GetController();
	Controller.OpenBracket(LOCTEXT("OverwriteAnim", "Overwriting Animation"));

	TArray<FString> BoneNames;
	PromptAnimationData.Frames[0].PoseBonesAndRotations.GetKeys(BoneNames);

	const float SequenceLength = PromptAnimationData.SequenceLength;
	const int32 FrameCount = PromptAnimationData.Frames.Num();
	const float TimeStep = SequenceLength / FrameCount;

	for (const FString& BoneName : BoneNames)
	{
		const FName BoneFName = FName(*BoneName);
		Controller.AddBoneTrack(BoneFName);

		for (int32 FrameIndex = 0; FrameIndex < FrameCount; ++FrameIndex)
		{
			const float Time = FrameIndex * TimeStep;
			const FPromptBoneData* BoneData = PromptAnimationData.Frames[FrameIndex].PoseBonesAndRotations.Find(BoneName);
			if (!BoneData) continue;

			Anim->AddKeyToSequence(Time,BoneFName,BoneData->Transform);
		}
	}

	// Set total sequence time

	Controller.SetPlayLength(SequenceLength);

	Controller.CloseBracket();

	// Step 4: Save
	Anim->PostEditChange();
	Anim->MarkPackageDirty();

	UE_LOG(LogTemp, Log, TEXT("✅ Successfully overwrote animation: %s"), *AssetPath);
}

//void UAnimationDataManager::OverwriteExistingAnimationAsset(const FString& AssetPath)
//{
//	// Step 1: Load the animation asset
//	UAnimSequence* Anim = LoadObject<UAnimSequence>(nullptr, *AssetPath);
//	if (!Anim)
//	{
//		UE_LOG(LogTemp, Error, TEXT("❌ Failed to load animation asset at path: %s"), *AssetPath);
//		return;
//	}
//
//	if (!Mesh)
//	{
//		UE_LOG(LogTemp, Error, TEXT("No skeletal mesh assigned."));
//		return;
//	}
//
//	if (PromptAnimationData.Frames.Num() <1)
//	{
//		UE_LOG(LogTemp, Error, TEXT("Not enough frames in PromptAnimationData."));
//		return;
//	}
//
//	// Step 2: Reset and reinitialize
//	Anim->ResetAnimation();
//	Anim->Modify(true);
//	Anim->SetSkeleton(Mesh->GetSkeleton());
//	Anim->SetPreviewMesh(Mesh);
//
//	Anim->ImportFileFramerate = 30.0f;
//
//	// Step 3: Bake animation
//	IAnimationDataController& Controller = Anim->GetController();
//	Controller.OpenBracket(LOCTEXT("OverwriteAnim", "Overwriting Animation"));
//
//	TArray<FString> BoneNames;
//	PromptAnimationData.Frames[0].PoseBonesAndRotations.GetKeys(BoneNames);
//
//	for (const FString& BoneName : BoneNames)
//	{
//		FRawAnimSequenceTrack Track;
//
//		for (const FPromptFrame& Frame : PromptAnimationData.Frames)
//		{
//			const FPromptBoneData* BoneData = Frame.PoseBonesAndRotations.Find(BoneName);
//			if (!BoneData)
//			{
//				Track.PosKeys.Add(FVector3f::ZeroVector);
//				Track.RotKeys.Add(FQuat4f::Identity);
//				Track.ScaleKeys.Add(FVector3f::OneVector);
//				continue;
//			}
//
//			Track.PosKeys.Add(FVector3f(BoneData->Transform.GetLocation()));
//			Track.RotKeys.Add(FQuat4f(BoneData->Transform.GetRotation()));
//			Track.ScaleKeys.Add(FVector3f(BoneData->Transform.GetScale3D()));
//		}
//
//		if (Track.PosKeys.Num() > 0 &&
//			Track.PosKeys.Num() == Track.RotKeys.Num() &&
//			Track.PosKeys.Num() == Track.ScaleKeys.Num())
//		{
//			Controller.AddBoneTrack(FName(*BoneName));
//			Controller.SetBoneTrackKeys(FName(*BoneName), Track.PosKeys, Track.RotKeys, Track.ScaleKeys);
//		}
//		else
//		{
//			UE_LOG(LogTemp, Warning, TEXT("Skipped bone %s due to key mismatch"), *BoneName);
//		}
//	}
//
//	Controller.CloseBracket();
//
//	// Step 4: Save
//	Anim->PostEditChange();
//	Anim->MarkPackageDirty();
//
//	UE_LOG(LogTemp, Log, TEXT("✅ Successfully overwrote animation: %s"), *AssetPath);
//}
#endif