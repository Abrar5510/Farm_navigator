// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CropData.h"

#ifdef FARM_NAVIGATOR_CropData_generated_h
#error "CropData.generated.h already included, missing '#pragma once' in CropData.h"
#endif
#define FARM_NAVIGATOR_CropData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCropData ****************************************************************
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UCropData_NoRegister();

#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCropData(); \
	friend struct Z_Construct_UClass_UCropData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UCropData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCropData, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Farm_navigator"), Z_Construct_UClass_UCropData_NoRegister) \
	DECLARE_SERIALIZER(UCropData)


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCropData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCropData(UCropData&&) = delete; \
	UCropData(const UCropData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCropData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCropData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCropData) \
	NO_API virtual ~UCropData();


#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h_7_PROLOG
#define FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h_10_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCropData;

// ********** End Class UCropData ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
