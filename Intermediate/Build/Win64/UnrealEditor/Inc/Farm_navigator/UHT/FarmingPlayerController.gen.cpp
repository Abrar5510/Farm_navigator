// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/FarmingPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFarmingPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingPlayerController();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFarmingPlayerController Function HarvestCrop ****************************
struct Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
		{ "ModuleRelativePath", "FarmingPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFarmingPlayerController, nullptr, "HarvestCrop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFarmingPlayerController::execHarvestCrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HarvestCrop();
	P_NATIVE_END;
}
// ********** End Class AFarmingPlayerController Function HarvestCrop ******************************

// ********** Begin Class AFarmingPlayerController Function Interact *******************************
struct Z_Construct_UFunction_AFarmingPlayerController_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Interaction system\n" },
#endif
		{ "ModuleRelativePath", "FarmingPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interaction system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmingPlayerController_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFarmingPlayerController, nullptr, "Interact", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmingPlayerController_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmingPlayerController_Interact_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFarmingPlayerController_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmingPlayerController_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFarmingPlayerController::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact();
	P_NATIVE_END;
}
// ********** End Class AFarmingPlayerController Function Interact *********************************

// ********** Begin Class AFarmingPlayerController Function PlantSeed ******************************
struct Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics
{
	struct FarmingPlayerController_eventPlantSeed_Parms
	{
		FString CropType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Farming actions\n" },
#endif
		{ "ModuleRelativePath", "FarmingPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Farming actions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CropType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::NewProp_CropType = { "CropType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingPlayerController_eventPlantSeed_Parms, CropType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::NewProp_CropType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFarmingPlayerController, nullptr, "PlantSeed", Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::FarmingPlayerController_eventPlantSeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::FarmingPlayerController_eventPlantSeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFarmingPlayerController_PlantSeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFarmingPlayerController_PlantSeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFarmingPlayerController::execPlantSeed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CropType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlantSeed(Z_Param_CropType);
	P_NATIVE_END;
}
// ********** End Class AFarmingPlayerController Function PlantSeed ********************************

// ********** Begin Class AFarmingPlayerController *************************************************
void AFarmingPlayerController::StaticRegisterNativesAFarmingPlayerController()
{
	UClass* Class = AFarmingPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HarvestCrop", &AFarmingPlayerController::execHarvestCrop },
		{ "Interact", &AFarmingPlayerController::execInteract },
		{ "PlantSeed", &AFarmingPlayerController::execPlantSeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFarmingPlayerController;
UClass* AFarmingPlayerController::GetPrivateStaticClass()
{
	using TClass = AFarmingPlayerController;
	if (!Z_Registration_Info_UClass_AFarmingPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FarmingPlayerController"),
			Z_Registration_Info_UClass_AFarmingPlayerController.InnerSingleton,
			StaticRegisterNativesAFarmingPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFarmingPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFarmingPlayerController_NoRegister()
{
	return AFarmingPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFarmingPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FarmingPlayerController.h" },
		{ "ModuleRelativePath", "FarmingPlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFarmingPlayerController_HarvestCrop, "HarvestCrop" }, // 3171233001
		{ &Z_Construct_UFunction_AFarmingPlayerController_Interact, "Interact" }, // 2848185616
		{ &Z_Construct_UFunction_AFarmingPlayerController_PlantSeed, "PlantSeed" }, // 2795600051
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmingPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFarmingPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmingPlayerController_Statics::ClassParams = {
	&AFarmingPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmingPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFarmingPlayerController()
{
	if (!Z_Registration_Info_UClass_AFarmingPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmingPlayerController.OuterSingleton, Z_Construct_UClass_AFarmingPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFarmingPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmingPlayerController);
AFarmingPlayerController::~AFarmingPlayerController() {}
// ********** End Class AFarmingPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFarmingPlayerController, AFarmingPlayerController::StaticClass, TEXT("AFarmingPlayerController"), &Z_Registration_Info_UClass_AFarmingPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmingPlayerController), 1965034299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h__Script_Farm_navigator_3881083778(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingPlayerController_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
