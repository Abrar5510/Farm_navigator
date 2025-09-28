// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/CropPlot.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCropPlot() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_ACropPlot();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_ACropPlot_NoRegister();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UCropData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACropPlot Function CanHarvest ********************************************
struct Z_Construct_UFunction_ACropPlot_CanHarvest_Statics
{
	struct CropPlot_eventCanHarvest_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CropPlot_eventCanHarvest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CropPlot_eventCanHarvest_Parms), &Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACropPlot, nullptr, "CanHarvest", Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::CropPlot_eventCanHarvest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::CropPlot_eventCanHarvest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACropPlot_CanHarvest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropPlot_CanHarvest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACropPlot::execCanHarvest)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanHarvest();
	P_NATIVE_END;
}
// ********** End Class ACropPlot Function CanHarvest **********************************************

// ********** Begin Class ACropPlot Function GetGrowthProgress *************************************
struct Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics
{
	struct CropPlot_eventGetGrowthProgress_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropPlot_eventGetGrowthProgress_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACropPlot, nullptr, "GetGrowthProgress", Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::CropPlot_eventGetGrowthProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::CropPlot_eventGetGrowthProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACropPlot_GetGrowthProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropPlot_GetGrowthProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACropPlot::execGetGrowthProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetGrowthProgress();
	P_NATIVE_END;
}
// ********** End Class ACropPlot Function GetGrowthProgress ***************************************

// ********** Begin Class ACropPlot Function HarvestCrop *******************************************
struct Z_Construct_UFunction_ACropPlot_HarvestCrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropPlot_HarvestCrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACropPlot, nullptr, "HarvestCrop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_HarvestCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropPlot_HarvestCrop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACropPlot_HarvestCrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropPlot_HarvestCrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACropPlot::execHarvestCrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HarvestCrop();
	P_NATIVE_END;
}
// ********** End Class ACropPlot Function HarvestCrop *********************************************

// ********** Begin Class ACropPlot Function HasCrop ***********************************************
struct Z_Construct_UFunction_ACropPlot_HasCrop_Statics
{
	struct CropPlot_eventHasCrop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACropPlot_HasCrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CropPlot_eventHasCrop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACropPlot_HasCrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CropPlot_eventHasCrop_Parms), &Z_Construct_UFunction_ACropPlot_HasCrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropPlot_HasCrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropPlot_HasCrop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_HasCrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropPlot_HasCrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACropPlot, nullptr, "HasCrop", Z_Construct_UFunction_ACropPlot_HasCrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_HasCrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACropPlot_HasCrop_Statics::CropPlot_eventHasCrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_HasCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropPlot_HasCrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACropPlot_HasCrop_Statics::CropPlot_eventHasCrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACropPlot_HasCrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropPlot_HasCrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACropPlot::execHasCrop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasCrop();
	P_NATIVE_END;
}
// ********** End Class ACropPlot Function HasCrop *************************************************

// ********** Begin Class ACropPlot Function PlantCrop *********************************************
struct Z_Construct_UFunction_ACropPlot_PlantCrop_Statics
{
	struct CropPlot_eventPlantCrop_Parms
	{
		FString CropType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Farming" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Farming functions\n" },
#endif
		{ "ModuleRelativePath", "CropPlot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Farming functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CropType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::NewProp_CropType = { "CropType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CropPlot_eventPlantCrop_Parms, CropType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::NewProp_CropType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACropPlot, nullptr, "PlantCrop", Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::CropPlot_eventPlantCrop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::CropPlot_eventPlantCrop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACropPlot_PlantCrop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACropPlot_PlantCrop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACropPlot::execPlantCrop)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_CropType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlantCrop(Z_Param_CropType);
	P_NATIVE_END;
}
// ********** End Class ACropPlot Function PlantCrop ***********************************************

// ********** Begin Class ACropPlot ****************************************************************
void ACropPlot::StaticRegisterNativesACropPlot()
{
	UClass* Class = ACropPlot::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanHarvest", &ACropPlot::execCanHarvest },
		{ "GetGrowthProgress", &ACropPlot::execGetGrowthProgress },
		{ "HarvestCrop", &ACropPlot::execHarvestCrop },
		{ "HasCrop", &ACropPlot::execHasCrop },
		{ "PlantCrop", &ACropPlot::execPlantCrop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACropPlot;
UClass* ACropPlot::GetPrivateStaticClass()
{
	using TClass = ACropPlot;
	if (!Z_Registration_Info_UClass_ACropPlot.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CropPlot"),
			Z_Registration_Info_UClass_ACropPlot.InnerSingleton,
			StaticRegisterNativesACropPlot,
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
	return Z_Registration_Info_UClass_ACropPlot.InnerSingleton;
}
UClass* Z_Construct_UClass_ACropPlot_NoRegister()
{
	return ACropPlot::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACropPlot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CropPlot.h" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlotMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CropPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCropType_MetaData[] = {
		{ "ModuleRelativePath", "CropPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlantedTime_MetaData[] = {
		{ "ModuleRelativePath", "CropPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWatered_MetaData[] = {
		{ "ModuleRelativePath", "CropPlot.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCropData_MetaData[] = {
		{ "ModuleRelativePath", "CropPlot.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlotMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CropMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CurrentCropType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlantedTime;
	static void NewProp_bIsWatered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWatered;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCropData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACropPlot_CanHarvest, "CanHarvest" }, // 704185247
		{ &Z_Construct_UFunction_ACropPlot_GetGrowthProgress, "GetGrowthProgress" }, // 4081082193
		{ &Z_Construct_UFunction_ACropPlot_HarvestCrop, "HarvestCrop" }, // 4009842049
		{ &Z_Construct_UFunction_ACropPlot_HasCrop, "HasCrop" }, // 2142291962
		{ &Z_Construct_UFunction_ACropPlot_PlantCrop, "PlantCrop" }, // 2280159695
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACropPlot>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropPlot_Statics::NewProp_PlotMesh = { "PlotMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropPlot, PlotMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlotMesh_MetaData), NewProp_PlotMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropPlot_Statics::NewProp_CropMesh = { "CropMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropPlot, CropMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropMesh_MetaData), NewProp_CropMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ACropPlot_Statics::NewProp_CurrentCropType = { "CurrentCropType", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropPlot, CurrentCropType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCropType_MetaData), NewProp_CurrentCropType_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACropPlot_Statics::NewProp_PlantedTime = { "PlantedTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropPlot, PlantedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlantedTime_MetaData), NewProp_PlantedTime_MetaData) };
void Z_Construct_UClass_ACropPlot_Statics::NewProp_bIsWatered_SetBit(void* Obj)
{
	((ACropPlot*)Obj)->bIsWatered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACropPlot_Statics::NewProp_bIsWatered = { "bIsWatered", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ACropPlot), &Z_Construct_UClass_ACropPlot_Statics::NewProp_bIsWatered_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWatered_MetaData), NewProp_bIsWatered_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACropPlot_Statics::NewProp_CurrentCropData = { "CurrentCropData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACropPlot, CurrentCropData), Z_Construct_UClass_UCropData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCropData_MetaData), NewProp_CurrentCropData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACropPlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropPlot_Statics::NewProp_PlotMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropPlot_Statics::NewProp_CropMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropPlot_Statics::NewProp_CurrentCropType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropPlot_Statics::NewProp_PlantedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropPlot_Statics::NewProp_bIsWatered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACropPlot_Statics::NewProp_CurrentCropData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropPlot_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACropPlot_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACropPlot_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACropPlot_Statics::ClassParams = {
	&ACropPlot::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACropPlot_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACropPlot_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACropPlot_Statics::Class_MetaDataParams), Z_Construct_UClass_ACropPlot_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACropPlot()
{
	if (!Z_Registration_Info_UClass_ACropPlot.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACropPlot.OuterSingleton, Z_Construct_UClass_ACropPlot_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACropPlot.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACropPlot);
ACropPlot::~ACropPlot() {}
// ********** End Class ACropPlot ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACropPlot, ACropPlot::StaticClass, TEXT("ACropPlot"), &Z_Registration_Info_UClass_ACropPlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACropPlot), 107661321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h__Script_Farm_navigator_2770003541(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropPlot_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
