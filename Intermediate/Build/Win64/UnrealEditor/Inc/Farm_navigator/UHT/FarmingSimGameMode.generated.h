// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmingSimGameMode.h"

#ifdef FARM_NAVIGATOR_FarmingSimGameMode_generated_h
#error "FarmingSimGameMode.generated.h already included, missing '#pragma once' in FarmingSimGameMode.h"
#endif
#define FARM_NAVIGATOR_FarmingSimGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFarmingSimGameMode ******************************************************
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingSimGameMode_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmingSimGameMode(); \
	friend struct Z_Construct_UClass_AFarmingSimGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingSimGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AFarmingSimGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_AFarmingSimGameMode_NoRegister) \
	DECLARE_SERIALIZER(AFarmingSimGameMode)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFarmingSimGameMode(AFarmingSimGameMode&&) = delete; \
	AFarmingSimGameMode(const AFarmingSimGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmingSimGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmingSimGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmingSimGameMode) \
	NO_API virtual ~AFarmingSimGameMode();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFarmingSimGameMode;

// ********** End Class AFarmingSimGameMode ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
