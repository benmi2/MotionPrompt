#include "AnimationSequenceExporter.h"

void UAnimationSequenceExporter::StartRecording(USkeletalMeshComponent* Mesh)
{
	if (!Mesh) return;

	TargetMesh = Mesh;
	RecordedFrames.Empty();
	SequenceLength = 0.0f;
	TimeAccumulator = 0.0f;
	bRecording = true;
}

void UAnimationSequenceExporter::TickRecording(float DeltaTime)
{
	if (!bRecording || !TargetMesh) return;

	TimeAccumulator += DeltaTime;
	SequenceLength += DeltaTime;

	const float Interval = 1.0f / FrameRate;
	while (TimeAccumulator >= Interval)
	{
		TimeAccumulator -= Interval;
		CaptureFrame();
	}
}

void UAnimationSequenceExporter::StopRecordingAndExport()
{
	bRecording = false;

	TSharedRef<FJsonObject> RootObject = MakeShared<FJsonObject>();
	RootObject->SetNumberField(TEXT("SequenceLength"), SequenceLength);

	TArray<TSharedPtr<FJsonValue>> JsonFrames;

	for (const FAnimationFrame& Frame : RecordedFrames)
	{
		TSharedRef<FJsonObject> FrameObject = MakeShared<FJsonObject>();
		TSharedRef<FJsonObject> BoneMap = MakeShared<FJsonObject>();

		for (const auto& Pair : Frame.TPoseBonesAndRotations)
		{
			const FString& BoneName = Pair.Key;
			const FMotionPromptBoneFrame& BoneData = Pair.Value;

			TSharedRef<FJsonObject> BoneJson = MakeShared<FJsonObject>();
			BoneJson->SetStringField("Parent", BoneData.Parent);

			TSharedRef<FJsonObject> TransformJson = MakeShared<FJsonObject>();

			TSharedRef<FJsonObject> LocJson = MakeShared<FJsonObject>();
			LocJson->SetNumberField("X", BoneData.Transform.Location.X);
			LocJson->SetNumberField("Y", BoneData.Transform.Location.Y);
			LocJson->SetNumberField("Z", BoneData.Transform.Location.Z);
			TransformJson->SetObjectField("Location", LocJson);

			TSharedRef<FJsonObject> RotJson = MakeShared<FJsonObject>();
			RotJson->SetNumberField("Pitch", BoneData.Transform.Rotation.Pitch);
			RotJson->SetNumberField("Yaw", BoneData.Transform.Rotation.Yaw);
			RotJson->SetNumberField("Roll", BoneData.Transform.Rotation.Roll);
			TransformJson->SetObjectField("Rotation", RotJson);

			TSharedRef<FJsonObject> ScaleJson = MakeShared<FJsonObject>();
			ScaleJson->SetNumberField("X", BoneData.Transform.Scale.X);
			ScaleJson->SetNumberField("Y", BoneData.Transform.Scale.Y);
			ScaleJson->SetNumberField("Z", BoneData.Transform.Scale.Z);
			TransformJson->SetObjectField("Scale", ScaleJson);

			BoneJson->SetObjectField("Transform", TransformJson);
			BoneMap->SetObjectField(BoneName, BoneJson);
		}

		FrameObject->SetObjectField("TPoseBonesAndRotations", BoneMap);
		JsonFrames.Add(MakeShared<FJsonValueObject>(FrameObject));
	}

	RootObject->SetArrayField("Frames", JsonFrames);

	FString OutputString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
	FJsonSerializer::Serialize(RootObject, Writer);

	const FString FilePath = FPaths::ProjectDir() / TEXT("ExportedMotionPrompt.json");
	FFileHelper::SaveStringToFile(OutputString, *FilePath);
	UE_LOG(LogTemp, Log, TEXT("Exported animation to: %s"), *FilePath);
}

void UAnimationSequenceExporter::CaptureFrame()
{
	if (!TargetMesh) return;

	const FReferenceSkeleton& RefSkeleton = TargetMesh->SkeletalMesh->GetRefSkeleton();
	FAnimationFrame NewFrame;

	for (int32 BoneIndex = 0; BoneIndex < TargetMesh->GetNumBones(); ++BoneIndex)
	{
		const FName BoneName = TargetMesh->GetBoneName(BoneIndex);
		const int32 ParentIndex = RefSkeleton.GetParentIndex(BoneIndex);
		const FString ParentName = (ParentIndex != INDEX_NONE) ? TargetMesh->GetBoneName(ParentIndex).ToString() : TEXT("None");

		// Get component-space (world relative to the mesh) bone transform
		FTransform BoneTransform = TargetMesh->GetBoneTransform(BoneIndex);

		// If not root, calculate local transform relative to parent
		if (ParentIndex != INDEX_NONE)
		{
			const FTransform ParentTransform = TargetMesh->GetBoneTransform(ParentIndex);
			BoneTransform = BoneTransform.GetRelativeTransform(ParentTransform); // Parent-space
		}

		// Store data in the frame struct
		FMotionPromptBoneFrame BoneFrame;
		BoneFrame.Parent = ParentName;
		BoneFrame.Transform.Location = BoneTransform.GetLocation();
		BoneFrame.Transform.Rotation = BoneTransform.Rotator();
		BoneFrame.Transform.Scale = BoneTransform.GetScale3D();

		NewFrame.TPoseBonesAndRotations.Add(BoneName.ToString(), BoneFrame);
	}

	RecordedFrames.Add(NewFrame);
}
