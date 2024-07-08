// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunSurvivors_init() {}
	GUNSURVIVORS_API UFunction* Z_Construct_UDelegateFunction_GunSurvivors_EnemyDiedDelegate__DelegateSignature();
	GUNSURVIVORS_API UFunction* Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature();
	GUNSURVIVORS_API UFunction* Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GunSurvivors;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GunSurvivors()
	{
		if (!Z_Registration_Info_UPackage__Script_GunSurvivors.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GunSurvivors_EnemyDiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GunSurvivors",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDC8F4C1D,
				0x53BCB586,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GunSurvivors.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GunSurvivors.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GunSurvivors(Z_Construct_UPackage__Script_GunSurvivors, TEXT("/Script/GunSurvivors"), Z_Registration_Info_UPackage__Script_GunSurvivors, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDC8F4C1D, 0x53BCB586));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
