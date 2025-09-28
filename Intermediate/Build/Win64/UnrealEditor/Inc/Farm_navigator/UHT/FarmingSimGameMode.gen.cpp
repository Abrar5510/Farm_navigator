// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/FarmingSimGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFarmingSimGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingSimGameMode();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_AFarmingSimGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFarmingSimGameMode ******************************************************
void AFarmingSimGameMode::StaticRegisterNativesAFarmingSimGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFarmingSimGameMode;
UClass* AFarmingSimGameMode::GetPrivateStaticClass()
{
	using TClass = AFarmingSimGameMode;
	if (!Z_Registration_Info_UClass_AFarmingSimGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FarmingSimGameMode"),
			Z_Registration_Info_UClass_AFarmingSimGameMode.InnerSingleton,
			StaticRegisterNativesAFarmingSimGameMode,
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
	return Z_Registration_Info_UClass_AFarmingSimGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFarmingSimGameMode_NoRegister()
{
	return AFarmingSimGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFarmingSimGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FarmingSimGameMode.h" },
		{ "ModuleRelativePath", "FarmingSimGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Time" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time of day system\n" },
#endif
		{ "ModuleRelativePath", "FarmingSimGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time of day system" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DayLength_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "FarmingSimGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRaining_MetaData[] = {
		{ "Category", "Weather" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Weather system\n" },
#endif
		{ "ModuleRelativePath", "FarmingSimGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Weather system" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DayLength;
	static void NewProp_bIsRaining_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRaining;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFarmingSimGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmingSimGameMode, CurrentTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTime_MetaData), NewProp_CurrentTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_DayLength = { "DayLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFarmingSimGameMode, DayLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DayLength_MetaData), NewProp_DayLength_MetaData) };
void Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_bIsRaining_SetBit(void* Obj)
{
	((AFarmingSimGameMode*)Obj)->bIsRaining = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_bIsRaining = { "bIsRaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFarmingSimGameMode), &Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_bIsRaining_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRaining_MetaData), NewProp_bIsRaining_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFarmingSimGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_CurrentTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_DayLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFarmingSimGameMode_Statics::NewProp_bIsRaining,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingSimGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFarmingSimGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingSimGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFarmingSimGameMode_Statics::ClassParams = {
	&AFarmingSimGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFarmingSimGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingSimGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFarmingSimGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFarmingSimGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFarmingSimGameMode()
{
	if (!Z_Registration_Info_UClass_AFarmingSimGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFarmingSimGameMode.OuterSingleton, Z_Construct_UClass_AFarmingSimGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFarmingSimGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFarmingSimGameMode);
AFarmingSimGameMode::~AFarmingSimGameMode() {}
// ********** End Class AFarmingSimGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFarmingSimGameMode, AFarmingSimGameMode::StaticClass, TEXT("AFarmingSimGameMode"), &Z_Registration_Info_UClass_AFarmingSimGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFarmingSimGameMode), 1345882977U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h__Script_Farm_navigator_1676355834(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSimGameMode_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
