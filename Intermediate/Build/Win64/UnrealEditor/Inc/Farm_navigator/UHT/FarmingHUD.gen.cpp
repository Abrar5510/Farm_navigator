// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/FarmingHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFarmingHUD() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingHUD();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingHUD_NoRegister();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFarmingHUD **************************************************************
void AFarmingHUD::StaticRegisterNativesAFarmingHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFarmingHUD;
UClass* AFarmingHUD::GetPrivateStaticClass()
{
	using TClass = AFarmingHUD;
	if (!Z_Registration_Info_UClass_AFarmingHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FarmingHUD"),
			Z_Registration_Info_UClass_AFarmingHUD.InnerSingleton,
			StaticRegisterNativesAFarmingHUD,
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
	return Z_Registration_Info_UClass_AFarmingHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AFarmingHUD_NoRegister()
{
	return AFarmingHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFarmingHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FarmingHUD.h" },
		{ "ModuleRelativePath", "FarmingHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarmingWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FarmingHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarmingWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FarmingHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_FarmingWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FarmingWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmingHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFarmingHUD_Statics::NewProp_FarmingWidgetClass = { "FarmingWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmingHUD, FarmingWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarmingWidgetClass_MetaData), NewProp_FarmingWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFarmingHUD_Statics::NewProp_FarmingWidget = { "FarmingWidget", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmingHUD, FarmingWidget), Z_Construct_UClass_UFarmingWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarmingWidget_MetaData), NewProp_FarmingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmingHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmingHUD_Statics::NewProp_FarmingWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmingHUD_Statics::NewProp_FarmingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFarmingHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmingHUD_Statics::ClassParams = {
	&AFarmingHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFarmingHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmingHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFarmingHUD()
{
	if (!Z_Registration_Info_UClass_AFarmingHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmingHUD.OuterSingleton, Z_Construct_UClass_AFarmingHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFarmingHUD.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmingHUD);
AFarmingHUD::~AFarmingHUD() {}
// ********** End Class AFarmingHUD ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFarmingHUD, AFarmingHUD::StaticClass, TEXT("AFarmingHUD"), &Z_Registration_Info_UClass_AFarmingHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmingHUD), 726395840U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h__Script_Farm_navigator_2775476278(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingHUD_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
