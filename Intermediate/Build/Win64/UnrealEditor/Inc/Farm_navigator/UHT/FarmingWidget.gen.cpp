// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/FarmingWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFarmingWidget() {}

// ********** Begin Cross Module References ********************************************************
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingWidget();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFarmingWidget Function HideInteractionPrompt ****************************
static FName NAME_UFarmingWidget_HideInteractionPrompt = FName(TEXT("HideInteractionPrompt"));
void UFarmingWidget::HideInteractionPrompt()
{
	UFunction* Func = FindFunctionChecked(NAME_UFarmingWidget_HideInteractionPrompt);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FarmingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingWidget, nullptr, "HideInteractionPrompt", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFarmingWidget Function HideInteractionPrompt ******************************

// ********** Begin Class UFarmingWidget Function ShowInteractionPrompt ****************************
struct FarmingWidget_eventShowInteractionPrompt_Parms
{
	FString Action;
};
static FName NAME_UFarmingWidget_ShowInteractionPrompt = FName(TEXT("ShowInteractionPrompt"));
void UFarmingWidget::ShowInteractionPrompt(const FString& Action)
{
	FarmingWidget_eventShowInteractionPrompt_Parms Parms;
	Parms.Action=Action;
	UFunction* Func = FindFunctionChecked(NAME_UFarmingWidget_ShowInteractionPrompt);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FarmingWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingWidget_eventShowInteractionPrompt_Parms, Action), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingWidget, nullptr, "ShowInteractionPrompt", Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::PropPointers), sizeof(FarmingWidget_eventShowInteractionPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FarmingWidget_eventShowInteractionPrompt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFarmingWidget Function ShowInteractionPrompt ******************************

// ********** Begin Class UFarmingWidget Function UpdateInventoryDisplay ***************************
static FName NAME_UFarmingWidget_UpdateInventoryDisplay = FName(TEXT("UpdateInventoryDisplay"));
void UFarmingWidget::UpdateInventoryDisplay()
{
	UFunction* Func = FindFunctionChecked(NAME_UFarmingWidget_UpdateInventoryDisplay);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FarmingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingWidget, nullptr, "UpdateInventoryDisplay", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFarmingWidget Function UpdateInventoryDisplay *****************************

// ********** Begin Class UFarmingWidget Function UpdateMoneyDisplay *******************************
struct FarmingWidget_eventUpdateMoneyDisplay_Parms
{
	int32 NewMoney;
};
static FName NAME_UFarmingWidget_UpdateMoneyDisplay = FName(TEXT("UpdateMoneyDisplay"));
void UFarmingWidget::UpdateMoneyDisplay(int32 NewMoney)
{
	FarmingWidget_eventUpdateMoneyDisplay_Parms Parms;
	Parms.NewMoney=NewMoney;
	UFunction* Func = FindFunctionChecked(NAME_UFarmingWidget_UpdateMoneyDisplay);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "FarmingWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewMoney;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::NewProp_NewMoney = { "NewMoney", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingWidget_eventUpdateMoneyDisplay_Parms, NewMoney), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::NewProp_NewMoney,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingWidget, nullptr, "UpdateMoneyDisplay", Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::PropPointers), sizeof(FarmingWidget_eventUpdateMoneyDisplay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(FarmingWidget_eventUpdateMoneyDisplay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UFarmingWidget Function UpdateMoneyDisplay *********************************

// ********** Begin Class UFarmingWidget ***********************************************************
void UFarmingWidget::StaticRegisterNativesUFarmingWidget()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFarmingWidget;
UClass* UFarmingWidget::GetPrivateStaticClass()
{
	using TClass = UFarmingWidget;
	if (!Z_Registration_Info_UClass_UFarmingWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FarmingWidget"),
			Z_Registration_Info_UClass_UFarmingWidget.InnerSingleton,
			StaticRegisterNativesUFarmingWidget,
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
	return Z_Registration_Info_UClass_UFarmingWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UFarmingWidget_NoRegister()
{
	return UFarmingWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFarmingWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FarmingWidget.h" },
		{ "ModuleRelativePath", "FarmingWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFarmingWidget_HideInteractionPrompt, "HideInteractionPrompt" }, // 1937164776
		{ &Z_Construct_UFunction_UFarmingWidget_ShowInteractionPrompt, "ShowInteractionPrompt" }, // 3223262668
		{ &Z_Construct_UFunction_UFarmingWidget_UpdateInventoryDisplay, "UpdateInventoryDisplay" }, // 3903622515
		{ &Z_Construct_UFunction_UFarmingWidget_UpdateMoneyDisplay, "UpdateMoneyDisplay" }, // 1872858261
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmingWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFarmingWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmingWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmingWidget_Statics::ClassParams = {
	&UFarmingWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmingWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmingWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmingWidget()
{
	if (!Z_Registration_Info_UClass_UFarmingWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmingWidget.OuterSingleton, Z_Construct_UClass_UFarmingWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmingWidget.OuterSingleton;
}
UFarmingWidget::UFarmingWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmingWidget);
UFarmingWidget::~UFarmingWidget() {}
// ********** End Class UFarmingWidget *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFarmingWidget, UFarmingWidget::StaticClass, TEXT("UFarmingWidget"), &Z_Registration_Info_UClass_UFarmingWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmingWidget), 3783117366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h__Script_Farm_navigator_824286226(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingWidget_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
