#include "PromptManager.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "AnimationDataManager.h"
#include "Http.h"
#include "Json.h"
#include "JsonUtilities.h"

void UPromptManager::SendPrompt(FString Prompt, const FString APIKeyRaw, const FOnPromptResponse& OnCompleted, UAnimationDataManager* TargetManager)
{
    FHttpModule* Http = &FHttpModule::Get();
    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();

    const FString AuthHeader = FString("Bearer ") + APIKeyRaw;
    Request->SetURL("https://openrouter.ai/api/v1/chat/completions");
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetHeader("Authorization", AuthHeader);

    // Add anti-truncation instructions to the prompt
    Prompt += TEXT("\n\nRespond only with a complete valid JSON object. Do not explain. Do not include markdown or code blocks. Output only raw JSON from '{' to '}'.");

    // Build JSON payload
    TSharedPtr<FJsonObject> JsonPayload = MakeShareable(new FJsonObject);
    JsonPayload->SetStringField("model", "openai/gpt-4-turbo");
    JsonPayload->SetNumberField("max_tokens", 4096);  // or more
    JsonPayload->SetNumberField("temperature", 0);

    TArray<TSharedPtr<FJsonValue>> Messages;
    TSharedPtr<FJsonObject> MessageObj = MakeShareable(new FJsonObject);
    MessageObj->SetStringField("role", "user");
    MessageObj->SetStringField("content", Prompt);
    Messages.Add(MakeShareable(new FJsonValueObject(MessageObj)));
    JsonPayload->SetArrayField("messages", Messages);

    FString OutputString;
    TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&OutputString);
    FJsonSerializer::Serialize(JsonPayload.ToSharedRef(), Writer);
    Request->SetContentAsString(OutputString);

    Request->OnProcessRequestComplete().BindLambda(
        [OnCompleted, TargetManager](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
        {
            if (!bWasSuccessful || !Response.IsValid())
            {
                OnCompleted.ExecuteIfBound(TEXT("ERROR: Request failed."));
                return;
            }

            FString Content = Response->GetContentAsString();
            UE_LOG(LogTemp, Warning, TEXT("📥 Raw OpenRouter Response:\n%s"), *Content);

            // Parse JSON response
            TSharedPtr<FJsonObject> JsonObject;
            TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Content);
            if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
            {
                if (JsonObject->HasField("error"))
                {
                    FString ErrMsg = JsonObject->GetObjectField("error")->GetStringField("message");
                    OnCompleted.ExecuteIfBound("ERROR: " + ErrMsg);
                    return;
                }
                UE_LOG(LogTemp, Warning, TEXT("Response Length: %d"), Response->GetContentAsString().Len());
                const TArray<TSharedPtr<FJsonValue>>* Choices;
                if (JsonObject->TryGetArrayField("choices", Choices) && Choices->Num() > 0)
                {
                    const TSharedPtr<FJsonObject> ChoiceObj = (*Choices)[0]->AsObject();
                    if (ChoiceObj.IsValid() && ChoiceObj->HasField("message"))
                    {
                        FString RawContent = ChoiceObj->GetObjectField("message")->GetStringField("content");

                        // Strip markdown wrappers if present
                        RawContent.ReplaceInline(TEXT("```json"), TEXT(""));
                        RawContent.ReplaceInline(TEXT("```"), TEXT(""));
                        RawContent = RawContent.TrimStartAndEnd();

                        OnCompleted.ExecuteIfBound(RawContent);

                        // Auto load into TargetManager
                        if (TargetManager)
                        {
                            const int32 Start = RawContent.Find(TEXT("{"));
                            const int32 End = RawContent.Find(TEXT("}"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
                            if (Start != INDEX_NONE && End > Start)
                            {
                                FString CleanJSON = RawContent.Mid(Start, End - Start + 1);
                                TargetManager->LoadPromptAnimationFromJSONString(CleanJSON);
                                UE_LOG(LogTemp, Log, TEXT("✅ Animation JSON loaded into DataManager."));
                            }
                            else
                            {
                                UE_LOG(LogTemp, Error, TEXT("❌ Could not extract JSON block from response."));
                            }
                        }

                        return;
                    }
                }
            }

            OnCompleted.ExecuteIfBound(TEXT("ERROR: Invalid response structure."));
        }
    );

    Request->ProcessRequest();
}
