// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/CropData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCropData() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UCropData();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UCropData_NoRegister();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCropData ****************************************************************
void UCropData::StaticRegisterNativesUCropData()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCropData;
UClass* UCropData::GetPrivateStaticClass()
{
	using TClass = UCropData;
	if (!Z_Registration_Info_UClass_UCropData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CropData"),
			Z_Registration_Info_UClass_UCropData.InnerSingleton,
			StaticRegisterNativesUCropData,
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
	return Z_Registration_Info_UClass_UCropData.InnerSingleton;
}
UClass* Z_Construct_UClass_UCropData_NoRegister()
{
	return UCropData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCropData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CropData.h" },
		{ "ModuleRelativePath", "CropData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropName_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "CropData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowthTime_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "CropData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuyPrice_MetaData[] = {
		{ "Category", "Crop" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// In game hours\n" },
#endif
		{ "ModuleRelativePath", "CropData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "In game hours" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SellPrice_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "CropData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedMesh_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "CropData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowingMesh_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "CropData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyMesh_MetaData[] = {
		{ "Category", "Crop" },
		{ "ModuleRelativePath", "CropData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_CropName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowthTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BuyPrice;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SellPrice;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeedMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GrowingMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCropData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_CropName = { "CropName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, CropName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropName_MetaData), NewProp_CropName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_GrowthTime = { "GrowthTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, GrowthTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowthTime_MetaData), NewProp_GrowthTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_BuyPrice = { "BuyPrice", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, BuyPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuyPrice_MetaData), NewProp_BuyPrice_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_SellPrice = { "SellPrice", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, SellPrice), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SellPrice_MetaData), NewProp_SellPrice_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_SeedMesh = { "SeedMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, SeedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedMesh_MetaData), NewProp_SeedMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_GrowingMesh = { "GrowingMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, GrowingMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowingMesh_MetaData), NewProp_GrowingMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCropData_Statics::NewProp_ReadyMesh = { "ReadyMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCropData, ReadyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyMesh_MetaData), NewProp_ReadyMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCropData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_CropName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_GrowthTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_BuyPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_SellPrice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_SeedMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_GrowingMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCropData_Statics::NewProp_ReadyMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCropData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCropData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCropData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCropData_Statics::ClassParams = {
	&UCropData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCropData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCropData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCropData_Statics::Class_MetaDataParams), Z_Construct_UClass_UCropData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCropData()
{
	if (!Z_Registration_Info_UClass_UCropData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCropData.OuterSingleton, Z_Construct_UClass_UCropData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCropData.OuterSingleton;
}
UCropData::UCropData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCropData);
UCropData::~UCropData() {}
// ********** End Class UCropData ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCropData, UCropData::StaticClass, TEXT("UCropData"), &Z_Registration_Info_UClass_UCropData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCropData), 2524160334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h__Script_Farm_navigator_1264204155(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_CropData_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
