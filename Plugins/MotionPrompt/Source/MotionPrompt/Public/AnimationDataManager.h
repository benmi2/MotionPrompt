#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/Skeleton.h"
#include "Animation/AnimTypes.h"
#include "Engine/SkeletalMesh.h"
#include "AnimationDataManager.generated.h"

USTRUCT(BlueprintType)
struct FPromptBoneData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	FTransform Transform;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	FString Parent = "None";
};

USTRUCT(BlueprintType)
struct FPromptFrame
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	TMap<FString, FPromptBoneData> PoseBonesAndRotations;
};

USTRUCT(BlueprintType)
struct FPromptAnimation
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	TArray<FPromptFrame> Frames;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	float SequenceLength = 1.0f;
};

UCLASS(Blueprintable)
class MOTIONPROMPT_API UAnimationDataManager : public UObject
{
	GENERATED_BODY()

public:
	void LoadPromptAnimationFromJSONString(const FString& JSONString);

	// Blueprint-visible T-pose data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	FPromptFrame TPoseAnimationData;

	// Mesh to apply animation to
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	USkeletalMesh* Mesh;

	// Full animation data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	FPromptAnimation PromptAnimationData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	FPromptAnimation BaseAnimationData;

	// Description of the intended animation type
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	FString AnimationDescription;
	// Parse current mesh pose as T-pose
	UFUNCTION(BlueprintCallable, Category = "Prompt Animation")
	void ParseTPose();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Prompt Animation")
	UAnimSequence* BaseAnimationSource;
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Prompt Animation")
	void ExportBaseAnimationToJSON();
	// Export T-pose data to file
	UFUNCTION(BlueprintCallable, Category = "Prompt Animation")
	void ExportTPoseData(FString Path);

	// Load animation from JSON file
	UFUNCTION(BlueprintCallable, Category = "Prompt Animation")
	void LoadPromptAnimationFromJSON(const FString& FullPath);

#if WITH_EDITOR
	// Bake the loaded animation to a UAnimSequence asset
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Prompt Animation")
	void BakeAnimationToAsset(const FString& AssetName, const FString& TargetFolder);
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Prompt Animation")
	void OverwriteExistingAnimationAsset(const FString& AssetPath);
#endif
};
