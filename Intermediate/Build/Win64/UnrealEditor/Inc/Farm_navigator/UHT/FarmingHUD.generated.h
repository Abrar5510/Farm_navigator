// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmingHUD.h"

#ifdef FARM_NAVIGATOR_FarmingHUD_generated_h
#error "FarmingHUD.generated.h already included, missing '#pragma once' in FarmingHUD.h"
#endif
#define FARM_NAVIGATOR_FarmingHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFarmingHUD **************************************************************
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingHUD_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmingHUD(); \
	friend struct Z_Construct_UClass_AFarmingHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AFarmingHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_AFarmingHUD_NoRegister) \
	DECLARE_SERIALIZER(AFarmingHUD)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFarmingHUD(AFarmingHUD&&) = delete; \
	AFarmingHUD(const AFarmingHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmingHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmingHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmingHUD) \
	NO_API virtual ~AFarmingHUD();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFarmingHUD;

// ********** End Class AFarmingHUD ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
