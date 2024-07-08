// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunSurvivors/TopdownCharacter.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTopdownCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GUNSURVIVORS_API UClass* Z_Construct_UClass_ABullet_NoRegister();
	GUNSURVIVORS_API UClass* Z_Construct_UClass_ATopdownCharacter();
	GUNSURVIVORS_API UClass* Z_Construct_UClass_ATopdownCharacter_NoRegister();
	GUNSURVIVORS_API UFunction* Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GunSurvivors();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GunSurvivors, nullptr, "PlayerDiedDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GunSurvivors_PlayerDiedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPlayerDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerDiedDelegate)
{
	PlayerDiedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(ATopdownCharacter::execOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_FromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopdownCharacter::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopdownCharacter::execMoveCompleted)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveCompleted(Z_Param_InputValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATopdownCharacter::execMoveTriggered)
	{
		P_GET_STRUCT(FVector2D,Z_Param_InputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveTriggered(Z_Param_InputValue);
		P_NATIVE_END;
	}
	void ATopdownCharacter::StaticRegisterNativesATopdownCharacter()
	{
		UClass* Class = ATopdownCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveCompleted", &ATopdownCharacter::execMoveCompleted },
			{ "MoveTriggered", &ATopdownCharacter::execMoveTriggered },
			{ "OverlapBegin", &ATopdownCharacter::execOverlapBegin },
			{ "Shoot", &ATopdownCharacter::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics
	{
		struct TopdownCharacter_eventMoveCompleted_Parms
		{
			FVector2D InputValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventMoveCompleted_Parms, InputValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacter, nullptr, "MoveCompleted", nullptr, nullptr, Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::TopdownCharacter_eventMoveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::TopdownCharacter_eventMoveCompleted_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATopdownCharacter_MoveCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacter_MoveCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics
	{
		struct TopdownCharacter_eventMoveTriggered_Parms
		{
			FVector2D InputValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventMoveTriggered_Parms, InputValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::NewProp_InputValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacter, nullptr, "MoveTriggered", nullptr, nullptr, Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::TopdownCharacter_eventMoveTriggered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::TopdownCharacter_eventMoveTriggered_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATopdownCharacter_MoveTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacter_MoveTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics
	{
		struct TopdownCharacter_eventOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool FromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_FromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OverlappedComponent_MetaData), Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OverlappedComponent_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherComp_MetaData), Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherComp_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_FromSweep_SetBit(void* Obj)
	{
		((TopdownCharacter_eventOverlapBegin_Parms*)Obj)->FromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TopdownCharacter_eventOverlapBegin_Parms), &Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TopdownCharacter_eventOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_SweepResult_MetaData), Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_SweepResult_MetaData) }; // 1891709922
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_FromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacter, nullptr, "OverlapBegin", nullptr, nullptr, Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::TopdownCharacter_eventOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::TopdownCharacter_eventOverlapBegin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ATopdownCharacter_OverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacter_OverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATopdownCharacter_Shoot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATopdownCharacter_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATopdownCharacter_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATopdownCharacter, nullptr, "Shoot", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATopdownCharacter_Shoot_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATopdownCharacter_Shoot_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATopdownCharacter_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATopdownCharacter_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATopdownCharacter);
	UClass* Z_Construct_UClass_ATopdownCharacter_NoRegister()
	{
		return ATopdownCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATopdownCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletSpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GunSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GunSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletActorToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BulletActorToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanMove_MetaData[];
#endif
		static void NewProp_bCanMove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdleFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IdleFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RunFlipbook_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RunFlipbook;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HorizontalLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalLimit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VerticalLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeathSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanShoot_MetaData[];
#endif
		static void NewProp_bCanShoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanShoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsAlive_MetaData[];
#endif
		static void NewProp_bIsAlive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAlive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootCooldownSeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShootCooldownSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATopdownCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GunSurvivors,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATopdownCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATopdownCharacter_MoveCompleted, "MoveCompleted" }, // 958334820
		{ &Z_Construct_UFunction_ATopdownCharacter_MoveTriggered, "MoveTriggered" }, // 1496163838
		{ &Z_Construct_UFunction_ATopdownCharacter_OverlapBegin, "OverlapBegin" }, // 2283832090
		{ &Z_Construct_UFunction_ATopdownCharacter_Shoot, "Shoot" }, // 1832095370
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TopdownCharacter.h" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_CapsuleComp_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_CapsuleComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_FlipbookComp_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_FlipbookComp = { "FlipbookComp", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, FlipbookComp), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_FlipbookComp_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_FlipbookComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunParent_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunParent = { "GunParent", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, GunParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunParent_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletSpawnPoint_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletSpawnPoint = { "BulletSpawnPoint", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, BulletSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletSpawnPoint_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletSpawnPoint_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunSprite_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunSprite = { "GunSprite", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, GunSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunSprite_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunSprite_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletActorToSpawn_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletActorToSpawn = { "BulletActorToSpawn", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, BulletActorToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_ABullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletActorToSpawn_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletActorToSpawn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementSpeed_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, MovementDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementDirection_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementDirection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove_SetBit(void* Obj)
	{
		((ATopdownCharacter*)Obj)->bCanMove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove = { "bCanMove", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATopdownCharacter), &Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_IdleFlipbook_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_IdleFlipbook = { "IdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, IdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_IdleFlipbook_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_IdleFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_RunFlipbook_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_RunFlipbook = { "RunFlipbook", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, RunFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_RunFlipbook_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_RunFlipbook_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_HorizontalLimit_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_HorizontalLimit = { "HorizontalLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, HorizontalLimit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_HorizontalLimit_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_HorizontalLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_VerticalLimit_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_VerticalLimit = { "VerticalLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, VerticalLimit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_VerticalLimit_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_VerticalLimit_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootSound_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootSound = { "ShootSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, ShootSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootSound_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_DeathSound_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_DeathSound = { "DeathSound", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, DeathSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_DeathSound_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_DeathSound_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot_SetBit(void* Obj)
	{
		((ATopdownCharacter*)Obj)->bCanShoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot = { "bCanShoot", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATopdownCharacter), &Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive_MetaData[] = {
		{ "Category", "TopdownCharacter" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive_SetBit(void* Obj)
	{
		((ATopdownCharacter*)Obj)->bIsAlive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive = { "bIsAlive", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATopdownCharacter), &Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootCooldownSeconds_MetaData[] = {
		{ "Category", "PLAYER" },
		{ "ModuleRelativePath", "TopdownCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootCooldownSeconds = { "ShootCooldownSeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATopdownCharacter, ShootCooldownSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootCooldownSeconds_MetaData), Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootCooldownSeconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATopdownCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_CapsuleComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_FlipbookComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_GunSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_BulletActorToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_MovementDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_IdleFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_RunFlipbook,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_HorizontalLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_VerticalLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_DeathSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bCanShoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_bIsAlive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATopdownCharacter_Statics::NewProp_ShootCooldownSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATopdownCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATopdownCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATopdownCharacter_Statics::ClassParams = {
		&ATopdownCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATopdownCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATopdownCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATopdownCharacter_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATopdownCharacter()
	{
		if (!Z_Registration_Info_UClass_ATopdownCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATopdownCharacter.OuterSingleton, Z_Construct_UClass_ATopdownCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATopdownCharacter.OuterSingleton;
	}
	template<> GUNSURVIVORS_API UClass* StaticClass<ATopdownCharacter>()
	{
		return ATopdownCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATopdownCharacter);
	ATopdownCharacter::~ATopdownCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATopdownCharacter, ATopdownCharacter::StaticClass, TEXT("ATopdownCharacter"), &Z_Registration_Info_UClass_ATopdownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATopdownCharacter), 1079327325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_2737929369(TEXT("/Script/GunSurvivors"),
		Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
