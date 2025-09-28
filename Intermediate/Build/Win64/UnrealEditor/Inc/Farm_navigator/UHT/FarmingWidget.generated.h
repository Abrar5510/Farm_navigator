// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FarmingWidget.h"

#ifdef FARM_NAVIGATOR_FarmingWidget_generated_h
#error "FarmingWidget.generated.h already included, missing '#pragma once' in FarmingWidget.h"
#endif
#define FARM_NAVIGATOR_FarmingWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFarmingWidget ***********************************************************
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_CALLBACK_WRAPPERS
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingWidget_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFarmingWidget(); \
	friend struct Z_Construct_UClass_UFarmingWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UFarmingWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_UFarmingWidget_NoRegister) \
	DECLARE_SERIALIZER(UFarmingWidget)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFarmingWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFarmingWidget(UFarmingWidget&&) = delete; \
	UFarmingWidget(const UFarmingWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFarmingWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFarmingWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFarmingWidget) \
	NO_API virtual ~UFarmingWidget();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_CALLBACK_WRAPPERS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFarmingWidget;

// ********** End Class UFarmingWidget *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
