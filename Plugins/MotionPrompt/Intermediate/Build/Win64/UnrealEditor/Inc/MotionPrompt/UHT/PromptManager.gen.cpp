// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionPrompt/Public/PromptManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromptManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UAnimationDataManager_NoRegister();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UPromptManager();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UPromptManager_NoRegister();
	MOTIONPROMPT_API UFunction* Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MotionPrompt();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics
	{
		struct _Script_MotionPrompt_eventOnPromptResponse_Parms
		{
			FString ResponseContent;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MotionPrompt_eventOnPromptResponse_Parms, ResponseContent), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::NewProp_ResponseContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PromptManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MotionPrompt, nullptr, "OnPromptResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::_Script_MotionPrompt_eventOnPromptResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::_Script_MotionPrompt_eventOnPromptResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPromptResponse_DelegateWrapper(const FScriptDelegate& OnPromptResponse, const FString& ResponseContent)
{
	struct _Script_MotionPrompt_eventOnPromptResponse_Parms
	{
		FString ResponseContent;
	};
	_Script_MotionPrompt_eventOnPromptResponse_Parms Parms;
	Parms.ResponseContent=ResponseContent;
	OnPromptResponse.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UPromptManager::execSendPrompt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_GET_PROPERTY(FStrProperty,Z_Param_APIKey);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCompleted);
		P_GET_OBJECT(UAnimationDataManager,Z_Param_TargetManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPrompt(Z_Param_Prompt,Z_Param_APIKey,FOnPromptResponse(Z_Param_Out_OnCompleted),Z_Param_TargetManager);
		P_NATIVE_END;
	}
	void UPromptManager::StaticRegisterNativesUPromptManager()
	{
		UClass* Class = UPromptManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendPrompt", &UPromptManager::execSendPrompt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPromptManager_SendPrompt_Statics
	{
		struct PromptManager_eventSendPrompt_Parms
		{
			FString Prompt;
			FString APIKey;
			FScriptDelegate OnCompleted;
			UAnimationDataManager* TargetManager;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCompleted;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PromptManager_eventSendPrompt_Parms, Prompt), METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_APIKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_APIKey = { "APIKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PromptManager_eventSendPrompt_Parms, APIKey), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_APIKey_MetaData), Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_APIKey_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PromptManager_eventSendPrompt_Parms, OnCompleted), Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_OnCompleted_MetaData) }; // 684180921
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_TargetManager = { "TargetManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PromptManager_eventSendPrompt_Parms, TargetManager), Z_Construct_UClass_UAnimationDataManager_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_Prompt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_APIKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::NewProp_TargetManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sends a prompt and invokes callback with raw string */" },
#endif
		{ "ModuleRelativePath", "Public/PromptManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sends a prompt and invokes callback with raw string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPromptManager, nullptr, "SendPrompt", nullptr, nullptr, Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::PromptManager_eventSendPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::PromptManager_eventSendPrompt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPromptManager_SendPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPromptManager_SendPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPromptManager);
	UClass* Z_Construct_UClass_UPromptManager_NoRegister()
	{
		return UPromptManager::StaticClass();
	}
	struct Z_Construct_UClass_UPromptManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPromptManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPromptManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPromptManager_SendPrompt, "SendPrompt" }, // 2114347447
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UPromptManager: Sends prompt to OpenRouter and forwards animation JSON to DataManager\n */" },
#endif
		{ "IncludePath", "PromptManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PromptManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPromptManager: Sends prompt to OpenRouter and forwards animation JSON to DataManager" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromptManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromptManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPromptManager_Statics::ClassParams = {
		&UPromptManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UPromptManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPromptManager()
	{
		if (!Z_Registration_Info_UClass_UPromptManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPromptManager.OuterSingleton, Z_Construct_UClass_UPromptManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPromptManager.OuterSingleton;
	}
	template<> MOTIONPROMPT_API UClass* StaticClass<UPromptManager>()
	{
		return UPromptManager::StaticClass();
	}
	UPromptManager::UPromptManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromptManager);
	UPromptManager::~UPromptManager() {}
	struct Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_PromptManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_PromptManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPromptManager, UPromptManager::StaticClass, TEXT("UPromptManager"), &Z_Registration_Info_UClass_UPromptManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPromptManager), 738091853U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_PromptManager_h_3769959558(TEXT("/Script/MotionPrompt"),
		Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_PromptManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_PromptManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
