// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamejamHorrorPuzzle/ItemBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemBase() {}
// Cross Module References
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AItemBase_NoRegister();
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AItemBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEJAMHORRORPUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FItemDataStruct();
// End Cross Module References
	DEFINE_FUNCTION(AItemBase::execOnPickedUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPickedUp();
		P_NATIVE_END;
	}
	void AItemBase::StaticRegisterNativesAItemBase()
	{
		UClass* Class = AItemBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPickedUp", &AItemBase::execOnPickedUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemBase_OnPickedUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemBase_OnPickedUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemBase_OnPickedUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemBase, nullptr, "OnPickedUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemBase_OnPickedUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemBase_OnPickedUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemBase_OnPickedUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemBase_OnPickedUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemBase_NoRegister()
	{
		return AItemBase::StaticClass();
	}
	struct Z_Construct_UClass_AItemBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemBase_OnPickedUp, "OnPickedUp" }, // 1914850987
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemBase.h" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMeshComp_MetaData[] = {
		{ "Category", "Mesh Item" },
		{ "Comment", "/**\n\x09* Variables\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ItemBase.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMeshComp = { "ItemMeshComp", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBase, ItemMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemBase_Statics::NewProp_ItemData_MetaData[] = {
		{ "Category", "Item Setting" },
		{ "ModuleRelativePath", "ItemBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AItemBase_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemBase, ItemData), Z_Construct_UScriptStruct_FItemDataStruct, METADATA_PARAMS(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::NewProp_ItemData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemBase_Statics::NewProp_ItemData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemBase_Statics::ClassParams = {
		&AItemBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemBase, 3603813683);
	template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<AItemBase>()
	{
		return AItemBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemBase(Z_Construct_UClass_AItemBase, &AItemBase::StaticClass, TEXT("/Script/GamejamHorrorPuzzle"), TEXT("AItemBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
