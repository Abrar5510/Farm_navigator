// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmingPlayerController.h"

#ifdef FARM_NAVIGATOR_FarmingPlayerController_generated_h
#error "FarmingPlayerController.generated.h already included, missing '#pragma once' in FarmingPlayerController.h"
#endif
#define FARM_NAVIGATOR_FarmingPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFarmingPlayerController *************************************************
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHarvestCrop); \
	DECLARE_FUNCTION(execPlantSeed); \
	DECLARE_FUNCTION(execInteract);


FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingPlayerController_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFarmingPlayerController(); \
	friend struct Z_Construct_UClass_AFarmingPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AFarmingPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_AFarmingPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AFarmingPlayerController)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFarmingPlayerController(AFarmingPlayerController&&) = delete; \
	AFarmingPlayerController(const AFarmingPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFarmingPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFarmingPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFarmingPlayerController) \
	NO_API virtual ~AFarmingPlayerController();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFarmingPlayerController;

// ********** End Class AFarmingPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
