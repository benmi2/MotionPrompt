#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Serialization/JsonWriter.h"
#include "Serialization/JsonSerializer.h"
#include "AnimationSequenceExporter.generated.h"

USTRUCT(BlueprintType)
struct FMotionPromptTransform
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FVector Location;

	UPROPERTY(BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(BlueprintReadWrite)
	FVector Scale;
};

USTRUCT(BlueprintType)
struct FMotionPromptBoneFrame
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString Parent;

	UPROPERTY(BlueprintReadWrite)
	FMotionPromptTransform Transform;
};

USTRUCT(BlueprintType)
struct FAnimationFrame
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TMap<FString, FMotionPromptBoneFrame> TPoseBonesAndRotations;
};

UCLASS(Blueprintable)
class MOTIONPROMPT_API UAnimationSequenceExporter : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation Export")
	float FrameRate = 30.0f;

	UPROPERTY(BlueprintReadOnly, Category = "Animation Export")
	TArray<FAnimationFrame> RecordedFrames;

	UPROPERTY(BlueprintReadOnly, Category = "Animation Export")
	float SequenceLength = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Export")
	USkeletalMeshComponent* TargetMesh;

	UFUNCTION(BlueprintCallable, Category = "Exporter")
	void StartRecording(USkeletalMeshComponent* Mesh);

	UFUNCTION(BlueprintCallable, Category = "Exporter")
	void TickRecording(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "Exporter")
	void StopRecordingAndExport();

private:
	UPROPERTY()
	float TimeAccumulator = 0.0f;

	UPROPERTY()
	bool bRecording = false;

	void CaptureFrame();
};
