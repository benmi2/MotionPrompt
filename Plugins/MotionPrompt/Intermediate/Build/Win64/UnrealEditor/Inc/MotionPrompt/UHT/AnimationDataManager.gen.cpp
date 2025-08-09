// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionPrompt/Public/AnimationDataManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationDataManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UAnimationDataManager();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UAnimationDataManager_NoRegister();
	MOTIONPROMPT_API UScriptStruct* Z_Construct_UScriptStruct_FPromptAnimation();
	MOTIONPROMPT_API UScriptStruct* Z_Construct_UScriptStruct_FPromptBoneData();
	MOTIONPROMPT_API UScriptStruct* Z_Construct_UScriptStruct_FPromptFrame();
	UPackage* Z_Construct_UPackage__Script_MotionPrompt();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PromptBoneData;
class UScriptStruct* FPromptBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PromptBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PromptBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromptBoneData, (UObject*)Z_Construct_UPackage__Script_MotionPrompt(), TEXT("PromptBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_PromptBoneData.OuterSingleton;
}
template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<FPromptBoneData>()
{
	return FPromptBoneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPromptBoneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromptBoneData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPromptBoneData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Transform_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPromptBoneData, Parent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Parent_MetaData), Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Parent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromptBoneData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewProp_Parent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromptBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
		nullptr,
		&NewStructOps,
		"PromptBoneData",
		Z_Construct_UScriptStruct_FPromptBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptBoneData_Statics::PropPointers),
		sizeof(FPromptBoneData),
		alignof(FPromptBoneData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptBoneData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPromptBoneData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptBoneData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPromptBoneData()
	{
		if (!Z_Registration_Info_UScriptStruct_PromptBoneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PromptBoneData.InnerSingleton, Z_Construct_UScriptStruct_FPromptBoneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PromptBoneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PromptFrame;
class UScriptStruct* FPromptFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PromptFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PromptFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromptFrame, (UObject*)Z_Construct_UPackage__Script_MotionPrompt(), TEXT("PromptFrame"));
	}
	return Z_Registration_Info_UScriptStruct_PromptFrame.OuterSingleton;
}
template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<FPromptFrame>()
{
	return FPromptFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPromptFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseBonesAndRotations_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PoseBonesAndRotations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseBonesAndRotations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PoseBonesAndRotations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromptFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromptFrame>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_ValueProp = { "PoseBonesAndRotations", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPromptBoneData, METADATA_PARAMS(0, nullptr) }; // 3723942828
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_Key_KeyProp = { "PoseBonesAndRotations_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations = { "PoseBonesAndRotations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPromptFrame, PoseBonesAndRotations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_MetaData), Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_MetaData) }; // 3723942828
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromptFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptFrame_Statics::NewProp_PoseBonesAndRotations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromptFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
		nullptr,
		&NewStructOps,
		"PromptFrame",
		Z_Construct_UScriptStruct_FPromptFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptFrame_Statics::PropPointers),
		sizeof(FPromptFrame),
		alignof(FPromptFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPromptFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPromptFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_PromptFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PromptFrame.InnerSingleton, Z_Construct_UScriptStruct_FPromptFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PromptFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PromptAnimation;
class UScriptStruct* FPromptAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PromptAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PromptAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromptAnimation, (UObject*)Z_Construct_UPackage__Script_MotionPrompt(), TEXT("PromptAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_PromptAnimation.OuterSingleton;
}
template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<FPromptAnimation>()
{
	return FPromptAnimation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPromptAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Frames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptAnimation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromptAnimation>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPromptFrame, METADATA_PARAMS(0, nullptr) }; // 1826900662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPromptAnimation, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames_MetaData), Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames_MetaData) }; // 1826900662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPromptAnimation, SequenceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_SequenceLength_MetaData), Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_SequenceLength_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromptAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewProp_SequenceLength,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromptAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
		nullptr,
		&NewStructOps,
		"PromptAnimation",
		Z_Construct_UScriptStruct_FPromptAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptAnimation_Statics::PropPointers),
		sizeof(FPromptAnimation),
		alignof(FPromptAnimation),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptAnimation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPromptAnimation_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromptAnimation_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPromptAnimation()
	{
		if (!Z_Registration_Info_UScriptStruct_PromptAnimation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PromptAnimation.InnerSingleton, Z_Construct_UScriptStruct_FPromptAnimation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PromptAnimation.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationDataManager::execLoadPromptAnimationFromJSON)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FullPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPromptAnimationFromJSON(Z_Param_FullPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationDataManager::execExportTPoseData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportTPoseData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationDataManager::execExportBaseAnimationToJSON)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExportBaseAnimationToJSON();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationDataManager::execParseTPose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParseTPose();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UAnimationDataManager::execOverwriteExistingAnimationAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverwriteExistingAnimationAsset(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationDataManager::execBakeAnimationToAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_TargetFolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BakeAnimationToAsset(Z_Param_AssetName,Z_Param_TargetFolder);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UAnimationDataManager::StaticRegisterNativesUAnimationDataManager()
	{
		UClass* Class = UAnimationDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "BakeAnimationToAsset", &UAnimationDataManager::execBakeAnimationToAsset },
#endif // WITH_EDITOR
			{ "ExportBaseAnimationToJSON", &UAnimationDataManager::execExportBaseAnimationToJSON },
			{ "ExportTPoseData", &UAnimationDataManager::execExportTPoseData },
			{ "LoadPromptAnimationFromJSON", &UAnimationDataManager::execLoadPromptAnimationFromJSON },
#if WITH_EDITOR
			{ "OverwriteExistingAnimationAsset", &UAnimationDataManager::execOverwriteExistingAnimationAsset },
#endif // WITH_EDITOR
			{ "ParseTPose", &UAnimationDataManager::execParseTPose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics
	{
		struct AnimationDataManager_eventBakeAnimationToAsset_Parms
		{
			FString AssetName;
			FString TargetFolder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetFolder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataManager_eventBakeAnimationToAsset_Parms, AssetName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_AssetName_MetaData), Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_AssetName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_TargetFolder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_TargetFolder = { "TargetFolder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataManager_eventBakeAnimationToAsset_Parms, TargetFolder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_TargetFolder_MetaData), Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_TargetFolder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::NewProp_TargetFolder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Bake the loaded animation to a UAnimSequence asset\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bake the loaded animation to a UAnimSequence asset" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataManager, nullptr, "BakeAnimationToAsset", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::AnimationDataManager_eventBakeAnimationToAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::AnimationDataManager_eventBakeAnimationToAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataManager, nullptr, "ExportBaseAnimationToJSON", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Export T-pose data to file\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Export T-pose data to file" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataManager, nullptr, "ExportTPoseData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics
	{
		struct AnimationDataManager_eventLoadPromptAnimationFromJSON_Parms
		{
			FString FullPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FullPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::NewProp_FullPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::NewProp_FullPath = { "FullPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataManager_eventLoadPromptAnimationFromJSON_Parms, FullPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::NewProp_FullPath_MetaData), Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::NewProp_FullPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::NewProp_FullPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Load animation from JSON file\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load animation from JSON file" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataManager, nullptr, "LoadPromptAnimationFromJSON", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::AnimationDataManager_eventLoadPromptAnimationFromJSON_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::AnimationDataManager_eventLoadPromptAnimationFromJSON_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics
	{
		struct AnimationDataManager_eventOverwriteExistingAnimationAsset_Parms
		{
			FString AssetPath;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataManager_eventOverwriteExistingAnimationAsset_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::NewProp_AssetPath_MetaData), Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::NewProp_AssetPath_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::NewProp_AssetPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataManager, nullptr, "OverwriteExistingAnimationAsset", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::AnimationDataManager_eventOverwriteExistingAnimationAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::AnimationDataManager_eventOverwriteExistingAnimationAsset_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UAnimationDataManager_ParseTPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataManager_ParseTPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Parse current mesh pose as T-pose\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse current mesh pose as T-pose" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataManager_ParseTPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataManager, nullptr, "ParseTPose", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataManager_ParseTPose_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataManager_ParseTPose_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimationDataManager_ParseTPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataManager_ParseTPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataManager);
	UClass* Z_Construct_UClass_UAnimationDataManager_NoRegister()
	{
		return UAnimationDataManager::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPoseAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TPoseAnimationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PromptAnimationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAnimationData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseAnimationData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnimationDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAnimationSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseAnimationSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationDataManager_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationDataManager_BakeAnimationToAsset, "BakeAnimationToAsset" }, // 2940924855
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationDataManager_ExportBaseAnimationToJSON, "ExportBaseAnimationToJSON" }, // 325891096
		{ &Z_Construct_UFunction_UAnimationDataManager_ExportTPoseData, "ExportTPoseData" }, // 404438948
		{ &Z_Construct_UFunction_UAnimationDataManager_LoadPromptAnimationFromJSON, "LoadPromptAnimationFromJSON" }, // 2290042256
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationDataManager_OverwriteExistingAnimationAsset, "OverwriteExistingAnimationAsset" }, // 3914345273
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UAnimationDataManager_ParseTPose, "ParseTPose" }, // 2672993411
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationDataManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_TPoseAnimationData_MetaData[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Blueprint-visible T-pose data\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint-visible T-pose data" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_TPoseAnimationData = { "TPoseAnimationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataManager, TPoseAnimationData), Z_Construct_UScriptStruct_FPromptFrame, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_TPoseAnimationData_MetaData), Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_TPoseAnimationData_MetaData) }; // 1826900662
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Mesh to apply animation to\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mesh to apply animation to" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataManager, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_Mesh_MetaData), Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_Mesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_PromptAnimationData_MetaData[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Full animation data\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Full animation data" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_PromptAnimationData = { "PromptAnimationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataManager, PromptAnimationData), Z_Construct_UScriptStruct_FPromptAnimation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_PromptAnimationData_MetaData), Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_PromptAnimationData_MetaData) }; // 205834083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationData_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationData = { "BaseAnimationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataManager, BaseAnimationData), Z_Construct_UScriptStruct_FPromptAnimation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationData_MetaData), Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationData_MetaData) }; // 205834083
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_AnimationDescription_MetaData[] = {
		{ "Category", "Prompt Animation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Description of the intended animation type\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of the intended animation type" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_AnimationDescription = { "AnimationDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataManager, AnimationDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_AnimationDescription_MetaData), Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_AnimationDescription_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationSource_MetaData[] = {
		{ "Category", "Prompt Animation" },
		{ "ModuleRelativePath", "Public/AnimationDataManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationSource = { "BaseAnimationSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationDataManager, BaseAnimationSource), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationSource_MetaData), Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationSource_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationDataManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_TPoseAnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_PromptAnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_AnimationDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationDataManager_Statics::NewProp_BaseAnimationSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationDataManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataManager_Statics::ClassParams = {
		&UAnimationDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationDataManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationDataManager_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataManager_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimationDataManager()
	{
		if (!Z_Registration_Info_UClass_UAnimationDataManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataManager.OuterSingleton, Z_Construct_UClass_UAnimationDataManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationDataManager.OuterSingleton;
	}
	template<> MOTIONPROMPT_API UClass* StaticClass<UAnimationDataManager>()
	{
		return UAnimationDataManager::StaticClass();
	}
	UAnimationDataManager::UAnimationDataManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataManager);
	UAnimationDataManager::~UAnimationDataManager() {}
	struct Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics::ScriptStructInfo[] = {
		{ FPromptBoneData::StaticStruct, Z_Construct_UScriptStruct_FPromptBoneData_Statics::NewStructOps, TEXT("PromptBoneData"), &Z_Registration_Info_UScriptStruct_PromptBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPromptBoneData), 3723942828U) },
		{ FPromptFrame::StaticStruct, Z_Construct_UScriptStruct_FPromptFrame_Statics::NewStructOps, TEXT("PromptFrame"), &Z_Registration_Info_UScriptStruct_PromptFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPromptFrame), 1826900662U) },
		{ FPromptAnimation::StaticStruct, Z_Construct_UScriptStruct_FPromptAnimation_Statics::NewStructOps, TEXT("PromptAnimation"), &Z_Registration_Info_UScriptStruct_PromptAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPromptAnimation), 205834083U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataManager, UAnimationDataManager::StaticClass, TEXT("UAnimationDataManager"), &Z_Registration_Info_UClass_UAnimationDataManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataManager), 2311840622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_3581957427(TEXT("/Script/MotionPrompt"),
		Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
