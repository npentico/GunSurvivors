// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSurvivors/TopdownGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopdownGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	GUNSURVIVORS_API UClass* Z_Construct_UClass_ATopdownGameMode();
	GUNSURVIVORS_API UClass* Z_Construct_UClass_ATopdownGameMode_NoRegister();
	GUNSURVIVORS_API UFunction* Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GunSurvivors();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_GunSurvivors_eventScoreChangedDelegate_Parms
		{
			int32 NewScore;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewScore;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::NewProp_NewScore = { "NewScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GunSurvivors_eventScoreChangedDelegate_Parms, NewScore), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::NewProp_NewScore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "TopdownGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GunSurvivors, nullptr, "ScoreChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::_Script_GunSurvivors_eventScoreChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::_Script_GunSurvivors_eventScoreChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FScoreChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ScoreChangedDelegate, int32 NewScore)
{
	struct _Script_GunSurvivors_eventScoreChangedDelegate_Parms
	{
		int32 NewScore;
	};
	_Script_GunSurvivors_eventScoreChangedDelegate_Parms Parms;
	Parms.NewScore=NewScore;
	ScoreChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	void ATopdownGameMode::StaticRegisterNativesATopdownGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopdownGameMode);
	UClass* Z_Construct_UClass_ATopdownGameMode_NoRegister()
	{
		return ATopdownGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATopdownGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Score;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScoreChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ScoreChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBeforeRestart_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeBeforeRestart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopdownGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunSurvivors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TopdownGameMode.h" },
		{ "ModuleRelativePath", "TopdownGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "TopdownGameMode" },
		{ "ModuleRelativePath", "TopdownGameMode.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownGameMode, Score), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_Score_MetaData), Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_Score_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_ScoreChangedDelegate_MetaData[] = {
		{ "ModuleRelativePath", "TopdownGameMode.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_ScoreChangedDelegate = { "ScoreChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownGameMode, ScoreChangedDelegate), Z_Construct_UDelegateFunction_GunSurvivors_ScoreChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_ScoreChangedDelegate_MetaData), Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_ScoreChangedDelegate_MetaData) }; // 3381654421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_TimeBeforeRestart_MetaData[] = {
		{ "Category", "TopdownGameMode" },
		{ "ModuleRelativePath", "TopdownGameMode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_TimeBeforeRestart = { "TimeBeforeRestart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownGameMode, TimeBeforeRestart), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_TimeBeforeRestart_MetaData), Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_TimeBeforeRestart_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopdownGameMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_Score,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_ScoreChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownGameMode_Statics::NewProp_TimeBeforeRestart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopdownGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopdownGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopdownGameMode_Statics::ClassParams = {
		&ATopdownGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATopdownGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopdownGameMode_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownGameMode_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATopdownGameMode()
	{
		if (!Z_Registration_Info_UClass_ATopdownGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopdownGameMode.OuterSingleton, Z_Construct_UClass_ATopdownGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopdownGameMode.OuterSingleton;
	}
	template<> GUNSURVIVORS_API UClass* StaticClass<ATopdownGameMode>()
	{
		return ATopdownGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopdownGameMode);
	ATopdownGameMode::~ATopdownGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopdownGameMode, ATopdownGameMode::StaticClass, TEXT("ATopdownGameMode"), &Z_Registration_Info_UClass_ATopdownGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopdownGameMode), 1931671567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownGameMode_h_4167710520(TEXT("/Script/GunSurvivors"),
		Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
