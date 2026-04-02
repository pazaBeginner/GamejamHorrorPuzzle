// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamejamHorrorPuzzle/GamejamHorrorPuzzleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamejamHorrorPuzzleGameMode() {}
// Cross Module References
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_NoRegister();
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AGamejamHorrorPuzzleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
// End Cross Module References
	void AGamejamHorrorPuzzleGameMode::StaticRegisterNativesAGamejamHorrorPuzzleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_NoRegister()
	{
		return AGamejamHorrorPuzzleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GamejamHorrorPuzzleGameMode.h" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamejamHorrorPuzzleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::ClassParams = {
		&AGamejamHorrorPuzzleGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamejamHorrorPuzzleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGamejamHorrorPuzzleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamejamHorrorPuzzleGameMode, 1531628691);
	template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<AGamejamHorrorPuzzleGameMode>()
	{
		return AGamejamHorrorPuzzleGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamejamHorrorPuzzleGameMode(Z_Construct_UClass_AGamejamHorrorPuzzleGameMode, &AGamejamHorrorPuzzleGameMode::StaticClass, TEXT("/Script/GamejamHorrorPuzzle"), TEXT("AGamejamHorrorPuzzleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamejamHorrorPuzzleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
