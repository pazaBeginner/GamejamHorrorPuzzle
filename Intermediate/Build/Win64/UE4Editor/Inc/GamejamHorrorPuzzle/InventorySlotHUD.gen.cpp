// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamejamHorrorPuzzle/InventorySlotHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventorySlotHUD() {}
// Cross Module References
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AInventorySlotHUD_NoRegister();
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AInventorySlotHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
// End Cross Module References
	void AInventorySlotHUD::StaticRegisterNativesAInventorySlotHUD()
	{
	}
	UClass* Z_Construct_UClass_AInventorySlotHUD_NoRegister()
	{
		return AInventorySlotHUD::StaticClass();
	}
	struct Z_Construct_UClass_AInventorySlotHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventorySlotHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventorySlotHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "InventorySlotHUD.h" },
		{ "ModuleRelativePath", "InventorySlotHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventorySlotHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventorySlotHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventorySlotHUD_Statics::ClassParams = {
		&AInventorySlotHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AInventorySlotHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventorySlotHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventorySlotHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventorySlotHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventorySlotHUD, 4200686566);
	template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<AInventorySlotHUD>()
	{
		return AInventorySlotHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventorySlotHUD(Z_Construct_UClass_AInventorySlotHUD, &AInventorySlotHUD::StaticClass, TEXT("/Script/GamejamHorrorPuzzle"), TEXT("AInventorySlotHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventorySlotHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
