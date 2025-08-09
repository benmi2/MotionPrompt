// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionPrompt_init() {}
	MOTIONPROMPT_API UFunction* Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MotionPrompt;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MotionPrompt()
	{
		if (!Z_Registration_Info_UPackage__Script_MotionPrompt.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MotionPrompt_OnPromptResponse__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MotionPrompt",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3D2C9993,
				0xFDA78BAE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MotionPrompt.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MotionPrompt.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MotionPrompt(Z_Construct_UPackage__Script_MotionPrompt, TEXT("/Script/MotionPrompt"), Z_Registration_Info_UPackage__Script_MotionPrompt, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3D2C9993, 0xFDA78BAE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
