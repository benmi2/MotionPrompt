// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationSequenceExporter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
#ifdef MOTIONPROMPT_AnimationSequenceExporter_generated_h
#error "AnimationSequenceExporter.generated.h already included, missing '#pragma once' in AnimationSequenceExporter.h"
#endif
#define MOTIONPROMPT_AnimationSequenceExporter_generated_h

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionPromptTransform_Statics; \
	MOTIONPROMPT_API static class UScriptStruct* StaticStruct();


template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<struct FMotionPromptTransform>();

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMotionPromptBoneFrame_Statics; \
	MOTIONPROMPT_API static class UScriptStruct* StaticStruct();


template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<struct FMotionPromptBoneFrame>();

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_41_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationFrame_Statics; \
	MOTIONPROMPT_API static class UScriptStruct* StaticStruct();


template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<struct FAnimationFrame>();

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_SPARSE_DATA
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStopRecordingAndExport); \
	DECLARE_FUNCTION(execTickRecording); \
	DECLARE_FUNCTION(execStartRecording);


#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_ACCESSORS
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSequenceExporter(); \
	friend struct Z_Construct_UClass_UAnimationSequenceExporter_Statics; \
public: \
	DECLARE_CLASS(UAnimationSequenceExporter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionPrompt"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSequenceExporter)


#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSequenceExporter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSequenceExporter(UAnimationSequenceExporter&&); \
	NO_API UAnimationSequenceExporter(const UAnimationSequenceExporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSequenceExporter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSequenceExporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSequenceExporter) \
	NO_API virtual ~UAnimationSequenceExporter();


#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_47_PROLOG
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_SPARSE_DATA \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_ACCESSORS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONPROMPT_API UClass* StaticClass<class UAnimationSequenceExporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationSequenceExporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
