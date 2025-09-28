// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CropPlot.h"

#ifdef FARM_NAVIGATOR_CropPlot_generated_h
#error "CropPlot.generated.h already included, missing '#pragma once' in CropPlot.h"
#endif
#define FARM_NAVIGATOR_CropPlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACropPlot ****************************************************************
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGrowthProgress); \
	DECLARE_FUNCTION(execCanHarvest); \
	DECLARE_FUNCTION(execHasCrop); \
	DECLARE_FUNCTION(execHarvestCrop); \
	DECLARE_FUNCTION(execPlantCrop);


FARM_NAVIGATOR_API UClass* Z_Construct_UClass_ACropPlot_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACropPlot(); \
	friend struct Z_Construct_UClass_ACropPlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_ACropPlot_NoRegister(); \
public: \
	DECLARE_CLASS2(ACropPlot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_ACropPlot_NoRegister) \
	DECLARE_SERIALIZER(ACropPlot)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACropPlot(ACropPlot&&) = delete; \
	ACropPlot(const ACropPlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACropPlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACropPlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACropPlot) \
	NO_API virtual ~ACropPlot();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACropPlot;

// ********** End Class ACropPlot ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
