// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmingSim.h"

#ifdef FARM_NAVIGATOR_FarmingSim_generated_h
#error "FarmingSim.generated.h already included, missing '#pragma once' in FarmingSim.h"
#endif
#define FARM_NAVIGATOR_FarmingSim_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFarmingSim **************************************************************
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpendMoney); \
	DECLARE_FUNCTION(execAddMoney); \
	DECLARE_FUNCTION(execRemoveFromInventory); \
	DECLARE_FUNCTION(execAddToInventory);


FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingSim_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmingSim(); \
	friend struct Z_Construct_UClass_UFarmingSim_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingSim_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmingSim, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_UFarmingSim_NoRegister) \
	DECLARE_SERIALIZER(UFarmingSim)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmingSim(UFarmingSim&&) = delete; \
	UFarmingSim(const UFarmingSim&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmingSim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmingSim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFarmingSim) \
	NO_API virtual ~UFarmingSim();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmingSim;

// ********** End Class UFarmingSim ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
