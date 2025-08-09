#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PromptManager.generated.h"

class UAnimationDataManager;

DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPromptResponse, FString, ResponseContent);

/**
 * UPromptManager: Sends prompt to OpenRouter and forwards animation JSON to DataManager
 */
UCLASS(Blueprintable)
class MOTIONPROMPT_API UPromptManager : public UObject
{
	GENERATED_BODY()

public:
	/** Sends a prompt and invokes callback with raw string */
	UFUNCTION(BlueprintCallable, Category = "Prompt")
	void SendPrompt(FString Prompt, const FString APIKey, const FOnPromptResponse& OnCompleted ,UAnimationDataManager* TargetManager);

	/** Sends a prompt, expects animation JSON, and parses it into the given DataManager */

};
