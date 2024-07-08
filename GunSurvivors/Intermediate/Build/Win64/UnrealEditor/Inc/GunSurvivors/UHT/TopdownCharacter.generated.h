// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TopdownCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GUNSURVIVORS_TopdownCharacter_generated_h
#error "TopdownCharacter.generated.h already included, missing '#pragma once' in TopdownCharacter.h"
#endif
#define GUNSURVIVORS_TopdownCharacter_generated_h

#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_18_DELEGATE \
GUNSURVIVORS_API void FPlayerDiedDelegate_DelegateWrapper(const FMulticastScriptDelegate& PlayerDiedDelegate);


#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_SPARSE_DATA
#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlapBegin); \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execMoveCompleted); \
	DECLARE_FUNCTION(execMoveTriggered);


#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_ACCESSORS
#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATopdownCharacter(); \
	friend struct Z_Construct_UClass_ATopdownCharacter_Statics; \
public: \
	DECLARE_CLASS(ATopdownCharacter, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GunSurvivors"), NO_API) \
	DECLARE_SERIALIZER(ATopdownCharacter)


#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATopdownCharacter(ATopdownCharacter&&); \
	NO_API ATopdownCharacter(const ATopdownCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATopdownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATopdownCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATopdownCharacter) \
	NO_API virtual ~ATopdownCharacter();


#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_19_PROLOG
#define FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_SPARSE_DATA \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_ACCESSORS \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GUNSURVIVORS_API UClass* StaticClass<class ATopdownCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_natha_OneDrive_Desktop_Unreal_Projects_GunSurvivors_GunSurvivors_Source_GunSurvivors_TopdownCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
