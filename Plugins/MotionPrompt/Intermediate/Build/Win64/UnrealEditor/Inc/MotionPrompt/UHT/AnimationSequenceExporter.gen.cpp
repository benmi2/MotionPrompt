// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionPrompt/Public/AnimationSequenceExporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSequenceExporter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UAnimationSequenceExporter();
	MOTIONPROMPT_API UClass* Z_Construct_UClass_UAnimationSequenceExporter_NoRegister();
	MOTIONPROMPT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrame();
	MOTIONPROMPT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionPromptBoneFrame();
	MOTIONPROMPT_API UScriptStruct* Z_Construct_UScriptStruct_FMotionPromptTransform();
	UPackage* Z_Construct_UPackage__Script_MotionPrompt();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionPromptTransform;
class UScriptStruct* FMotionPromptTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionPromptTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionPromptTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionPromptTransform, (UObject*)Z_Construct_UPackage__Script_MotionPrompt(), TEXT("MotionPromptTransform"));
	}
	return Z_Registration_Info_UScriptStruct_MotionPromptTransform.OuterSingleton;
}
template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<FMotionPromptTransform>()
{
	return FMotionPromptTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionPromptTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionPromptTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "MotionPromptTransform" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPromptTransform, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Location_MetaData), Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Location_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "MotionPromptTransform" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPromptTransform, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Rotation_MetaData), Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Rotation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "MotionPromptTransform" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPromptTransform, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Scale_MetaData), Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Scale_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewProp_Scale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
		nullptr,
		&NewStructOps,
		"MotionPromptTransform",
		Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::PropPointers),
		sizeof(FMotionPromptTransform),
		alignof(FMotionPromptTransform),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMotionPromptTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionPromptTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionPromptTransform.InnerSingleton, Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionPromptTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame;
class UScriptStruct* FMotionPromptBoneFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionPromptBoneFrame, (UObject*)Z_Construct_UPackage__Script_MotionPrompt(), TEXT("MotionPromptBoneFrame"));
	}
	return Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame.OuterSingleton;
}
template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<FMotionPromptBoneFrame>()
{
	return FMotionPromptBoneFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionPromptBoneFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "MotionPromptBoneFrame" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPromptBoneFrame, Parent), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Parent_MetaData), Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Parent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "MotionPromptBoneFrame" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMotionPromptBoneFrame, Transform), Z_Construct_UScriptStruct_FMotionPromptTransform, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Transform_MetaData), Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Transform_MetaData) }; // 1773266512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
		nullptr,
		&NewStructOps,
		"MotionPromptBoneFrame",
		Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::PropPointers),
		sizeof(FMotionPromptBoneFrame),
		alignof(FMotionPromptBoneFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FMotionPromptBoneFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame.InnerSingleton, Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationFrame;
class UScriptStruct* FAnimationFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationFrame, (UObject*)Z_Construct_UPackage__Script_MotionPrompt(), TEXT("AnimationFrame"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationFrame.OuterSingleton;
}
template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<FAnimationFrame>()
{
	return FAnimationFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_TPoseBonesAndRotations_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_TPoseBonesAndRotations_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TPoseBonesAndRotations_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_TPoseBonesAndRotations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationFrame>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_ValueProp = { "TPoseBonesAndRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMotionPromptBoneFrame, METADATA_PARAMS(0, nullptr) }; // 4012464084
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_Key_KeyProp = { "TPoseBonesAndRotations_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_MetaData[] = {
		{ "Category", "AnimationFrame" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations = { "TPoseBonesAndRotations", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAnimationFrame, TPoseBonesAndRotations), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_MetaData), Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_MetaData) }; // 4012464084
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewProp_TPoseBonesAndRotations,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
		nullptr,
		&NewStructOps,
		"AnimationFrame",
		Z_Construct_UScriptStruct_FAnimationFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrame_Statics::PropPointers),
		sizeof(FAnimationFrame),
		alignof(FAnimationFrame),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAnimationFrame_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationFrame_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationFrame.InnerSingleton, Z_Construct_UScriptStruct_FAnimationFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationFrame.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimationSequenceExporter::execStopRecordingAndExport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopRecordingAndExport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSequenceExporter::execTickRecording)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TickRecording(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSequenceExporter::execStartRecording)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecording(Z_Param_Mesh);
		P_NATIVE_END;
	}
	void UAnimationSequenceExporter::StaticRegisterNativesUAnimationSequenceExporter()
	{
		UClass* Class = UAnimationSequenceExporter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartRecording", &UAnimationSequenceExporter::execStartRecording },
			{ "StopRecordingAndExport", &UAnimationSequenceExporter::execStopRecordingAndExport },
			{ "TickRecording", &UAnimationSequenceExporter::execTickRecording },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics
	{
		struct AnimationSequenceExporter_eventStartRecording_Parms
		{
			USkeletalMeshComponent* Mesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::NewProp_Mesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSequenceExporter_eventStartRecording_Parms, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::NewProp_Mesh_MetaData), Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::NewProp_Mesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Exporter" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSequenceExporter, nullptr, "StartRecording", nullptr, nullptr, Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::AnimationSequenceExporter_eventStartRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::AnimationSequenceExporter_eventStartRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Exporter" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSequenceExporter, nullptr, "StopRecordingAndExport", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics
	{
		struct AnimationSequenceExporter_eventTickRecording_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationSequenceExporter_eventTickRecording_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "Exporter" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSequenceExporter, nullptr, "TickRecording", nullptr, nullptr, Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::AnimationSequenceExporter_eventTickRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::AnimationSequenceExporter_eventTickRecording_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationSequenceExporter);
	UClass* Z_Construct_UClass_UAnimationSequenceExporter_NoRegister()
	{
		return UAnimationSequenceExporter::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSequenceExporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecordedFrames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedFrames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RecordedFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeAccumulator_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeAccumulator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecording_MetaData[];
#endif
		static void NewProp_bRecording_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecording;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSequenceExporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionPrompt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationSequenceExporter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSequenceExporter_StartRecording, "StartRecording" }, // 4285145367
		{ &Z_Construct_UFunction_UAnimationSequenceExporter_StopRecordingAndExport, "StopRecordingAndExport" }, // 3991100857
		{ &Z_Construct_UFunction_UAnimationSequenceExporter_TickRecording, "TickRecording" }, // 1079151320
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimationSequenceExporter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Animation Export" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSequenceExporter, FrameRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_FrameRate_MetaData), Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_FrameRate_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames_Inner = { "RecordedFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAnimationFrame, METADATA_PARAMS(0, nullptr) }; // 888364247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames_MetaData[] = {
		{ "Category", "Animation Export" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames = { "RecordedFrames", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSequenceExporter, RecordedFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames_MetaData), Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames_MetaData) }; // 888364247
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_SequenceLength_MetaData[] = {
		{ "Category", "Animation Export" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSequenceExporter, SequenceLength), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_SequenceLength_MetaData), Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_SequenceLength_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TargetMesh_MetaData[] = {
		{ "Category", "Animation Export" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TargetMesh = { "TargetMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSequenceExporter, TargetMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TargetMesh_MetaData), Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TargetMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TimeAccumulator_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TimeAccumulator = { "TimeAccumulator", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimationSequenceExporter, TimeAccumulator), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TimeAccumulator_MetaData), Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TimeAccumulator_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationSequenceExporter.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording_SetBit(void* Obj)
	{
		((UAnimationSequenceExporter*)Obj)->bRecording = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording = { "bRecording", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimationSequenceExporter), &Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording_MetaData), Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSequenceExporter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_RecordedFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_SequenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TargetMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_TimeAccumulator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSequenceExporter_Statics::NewProp_bRecording,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSequenceExporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSequenceExporter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSequenceExporter_Statics::ClassParams = {
		&UAnimationSequenceExporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationSequenceExporter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationSequenceExporter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSequenceExporter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAnimationSequenceExporter()
	{
		if (!Z_Registration_Info_UClass_UAnimationSequenceExporter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationSequenceExporter.OuterSingleton, Z_Construct_UClass_UAnimationSequenceExporter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationSequenceExporter.OuterSingleton;
	}
	template<> MOTIONPROMPT_API UClass* StaticClass<UAnimationSequenceExporter>()
	{
		return UAnimationSequenceExporter::StaticClass();
	}
	UAnimationSequenceExporter::UAnimationSequenceExporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSequenceExporter);
	UAnimationSequenceExporter::~UAnimationSequenceExporter() {}
	struct Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics::ScriptStructInfo[] = {
		{ FMotionPromptTransform::StaticStruct, Z_Construct_UScriptStruct_FMotionPromptTransform_Statics::NewStructOps, TEXT("MotionPromptTransform"), &Z_Registration_Info_UScriptStruct_MotionPromptTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionPromptTransform), 1773266512U) },
		{ FMotionPromptBoneFrame::StaticStruct, Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics::NewStructOps, TEXT("MotionPromptBoneFrame"), &Z_Registration_Info_UScriptStruct_MotionPromptBoneFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionPromptBoneFrame), 4012464084U) },
		{ FAnimationFrame::StaticStruct, Z_Construct_UScriptStruct_FAnimationFrame_Statics::NewStructOps, TEXT("AnimationFrame"), &Z_Registration_Info_UScriptStruct_AnimationFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationFrame), 888364247U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationSequenceExporter, UAnimationSequenceExporter::StaticClass, TEXT("UAnimationSequenceExporter"), &Z_Registration_Info_UClass_UAnimationSequenceExporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationSequenceExporter), 3867785325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_3227567710(TEXT("/Script/MotionPrompt"),
		Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
