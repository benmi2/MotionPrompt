// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimationDataManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOTIONPROMPT_AnimationDataManager_generated_h
#error "AnimationDataManager.generated.h already included, missing '#pragma once' in AnimationDataManager.h"
#endif
#define MOTIONPROMPT_AnimationDataManager_generated_h

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPromptBoneData_Statics; \
	MOTIONPROMPT_API static class UScriptStruct* StaticStruct();


template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<struct FPromptBoneData>();

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPromptFrame_Statics; \
	MOTIONPROMPT_API static class UScriptStruct* StaticStruct();


template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<struct FPromptFrame>();

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPromptAnimation_Statics; \
	MOTIONPROMPT_API static class UScriptStruct* StaticStruct();


template<> MOTIONPROMPT_API UScriptStruct* StaticStruct<struct FPromptAnimation>();

#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_SPARSE_DATA
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadPromptAnimationFromJSON); \
	DECLARE_FUNCTION(execExportTPoseData); \
	DECLARE_FUNCTION(execExportBaseAnimationToJSON); \
	DECLARE_FUNCTION(execParseTPose);


#if WITH_EDITOR
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverwriteExistingAnimationAsset); \
	DECLARE_FUNCTION(execBakeAnimationToAsset);


#else
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_ACCESSORS
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDataManager(); \
	friend struct Z_Construct_UClass_UAnimationDataManager_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MotionPrompt"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataManager)


#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataManager(UAnimationDataManager&&); \
	NO_API UAnimationDataManager(const UAnimationDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataManager) \
	NO_API virtual ~UAnimationDataManager();


#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_43_PROLOG
#define FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_SPARSE_DATA \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_ACCESSORS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_INCLASS_NO_PURE_DECLS \
	FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h_46_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOTIONPROMPT_API UClass* StaticClass<class UAnimationDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_benmi_Documents_Unreal_Projects_AnimationGenerator_Plugins_MotionPrompt_Source_MotionPrompt_Public_AnimationDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
