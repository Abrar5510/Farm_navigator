// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Farm_navigator/FarmingSim.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFarmingSim() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingSim();
FARM_NAVIGATOR_API UClass* Z_Construct_UClass_UFarmingSim_NoRegister();
UPackage* Z_Construct_UPackage__Script_Farm_navigator();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFarmingSim Function AddMoney ********************************************
struct Z_Construct_UFunction_UFarmingSim_AddMoney_Statics
{
	struct FarmingSim_eventAddMoney_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Economy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add money\n" },
#endif
		{ "ModuleRelativePath", "FarmingSim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add money" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingSim_eventAddMoney_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingSim, nullptr, "AddMoney", Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::FarmingSim_eventAddMoney_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::FarmingSim_eventAddMoney_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFarmingSim_AddMoney()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingSim_AddMoney_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFarmingSim::execAddMoney)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMoney(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UFarmingSim Function AddMoney **********************************************

// ********** Begin Class UFarmingSim Function AddToInventory **************************************
struct Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics
{
	struct FarmingSim_eventAddToInventory_Parms
	{
		FString ItemName;
		int32 Quantity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Add item to inventory\n" },
#endif
		{ "ModuleRelativePath", "FarmingSim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add item to inventory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingSim_eventAddToInventory_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingSim_eventAddToInventory_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::NewProp_Quantity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingSim, nullptr, "AddToInventory", Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::FarmingSim_eventAddToInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::FarmingSim_eventAddToInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFarmingSim_AddToInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingSim_AddToInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFarmingSim::execAddToInventory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddToInventory(Z_Param_ItemName,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UFarmingSim Function AddToInventory ****************************************

// ********** Begin Class UFarmingSim Function RemoveFromInventory *********************************
struct Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics
{
	struct FarmingSim_eventRemoveFromInventory_Parms
	{
		FString ItemName;
		int32 Quantity;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Remove item from inventory\n" },
#endif
		{ "ModuleRelativePath", "FarmingSim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Remove item from inventory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quantity;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingSim_eventRemoveFromInventory_Parms, ItemName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingSim_eventRemoveFromInventory_Parms, Quantity), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FarmingSim_eventRemoveFromInventory_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FarmingSim_eventRemoveFromInventory_Parms), &Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_ItemName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_Quantity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingSim, nullptr, "RemoveFromInventory", Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::FarmingSim_eventRemoveFromInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::FarmingSim_eventRemoveFromInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFarmingSim_RemoveFromInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingSim_RemoveFromInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFarmingSim::execRemoveFromInventory)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Quantity);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveFromInventory(Z_Param_ItemName,Z_Param_Quantity);
	P_NATIVE_END;
}
// ********** End Class UFarmingSim Function RemoveFromInventory ***********************************

// ********** Begin Class UFarmingSim Function SpendMoney ******************************************
struct Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics
{
	struct FarmingSim_eventSpendMoney_Parms
	{
		int32 Amount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Economy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spend money\n" },
#endif
		{ "ModuleRelativePath", "FarmingSim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spend money" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FarmingSim_eventSpendMoney_Parms, Amount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FarmingSim_eventSpendMoney_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FarmingSim_eventSpendMoney_Parms), &Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFarmingSim, nullptr, "SpendMoney", Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::FarmingSim_eventSpendMoney_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::FarmingSim_eventSpendMoney_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFarmingSim_SpendMoney()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFarmingSim_SpendMoney_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFarmingSim::execSpendMoney)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SpendMoney(Z_Param_Amount);
	P_NATIVE_END;
}
// ********** End Class UFarmingSim Function SpendMoney ********************************************

// ********** Begin Class UFarmingSim **************************************************************
void UFarmingSim::StaticRegisterNativesUFarmingSim()
{
	UClass* Class = UFarmingSim::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMoney", &UFarmingSim::execAddMoney },
		{ "AddToInventory", &UFarmingSim::execAddToInventory },
		{ "RemoveFromInventory", &UFarmingSim::execRemoveFromInventory },
		{ "SpendMoney", &UFarmingSim::execSpendMoney },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFarmingSim;
UClass* UFarmingSim::GetPrivateStaticClass()
{
	using TClass = UFarmingSim;
	if (!Z_Registration_Info_UClass_UFarmingSim.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FarmingSim"),
			Z_Registration_Info_UClass_UFarmingSim.InnerSingleton,
			StaticRegisterNativesUFarmingSim,
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
	return Z_Registration_Info_UClass_UFarmingSim.InnerSingleton;
}
UClass* Z_Construct_UClass_UFarmingSim_NoRegister()
{
	return UFarmingSim::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFarmingSim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FarmingSim.h" },
		{ "ModuleRelativePath", "FarmingSim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player inventory\n" },
#endif
		{ "ModuleRelativePath", "FarmingSim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player inventory" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerMoney_MetaData[] = {
		{ "Category", "Economy" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Player money\n" },
#endif
		{ "ModuleRelativePath", "FarmingSim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player money" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerInventory_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerInventory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerInventory;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerMoney;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFarmingSim_AddMoney, "AddMoney" }, // 3676285768
		{ &Z_Construct_UFunction_UFarmingSim_AddToInventory, "AddToInventory" }, // 3344915221
		{ &Z_Construct_UFunction_UFarmingSim_RemoveFromInventory, "RemoveFromInventory" }, // 1642886970
		{ &Z_Construct_UFunction_UFarmingSim_SpendMoney, "SpendMoney" }, // 2867852436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFarmingSim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerInventory_ValueProp = { "PlayerInventory", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerInventory_Key_KeyProp = { "PlayerInventory_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFarmingSim, PlayerInventory), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInventory_MetaData), NewProp_PlayerInventory_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerMoney = { "PlayerMoney", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFarmingSim, PlayerMoney), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerMoney_MetaData), NewProp_PlayerMoney_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFarmingSim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerInventory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerInventory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerInventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFarmingSim_Statics::NewProp_PlayerMoney,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmingSim_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFarmingSim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Farm_navigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmingSim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFarmingSim_Statics::ClassParams = {
	&UFarmingSim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFarmingSim_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFarmingSim_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFarmingSim_Statics::Class_MetaDataParams), Z_Construct_UClass_UFarmingSim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFarmingSim()
{
	if (!Z_Registration_Info_UClass_UFarmingSim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFarmingSim.OuterSingleton, Z_Construct_UClass_UFarmingSim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFarmingSim.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFarmingSim);
UFarmingSim::~UFarmingSim() {}
// ********** End Class UFarmingSim ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h__Script_Farm_navigator_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFarmingSim, UFarmingSim::StaticClass, TEXT("UFarmingSim"), &Z_Registration_Info_UClass_UFarmingSim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFarmingSim), 2340224664U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h__Script_Farm_navigator_3528904309(TEXT("/Script/Farm_navigator"),
	Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h__Script_Farm_navigator_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Farm_navigator_Source_Farm_navigator_FarmingSim_h__Script_Farm_navigator_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
