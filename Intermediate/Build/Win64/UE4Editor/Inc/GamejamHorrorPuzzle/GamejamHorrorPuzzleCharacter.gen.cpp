// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamejamHorrorPuzzle/GamejamHorrorPuzzleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamejamHorrorPuzzleCharacter() {}
// Cross Module References
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_NoRegister();
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_AGamejamHorrorPuzzleCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static FName NAME_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound = FName(TEXT("OnPlayerMoveSound"));
	void AGamejamHorrorPuzzleCharacter::OnPlayerMoveSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound),NULL);
	}
	void AGamejamHorrorPuzzleCharacter::StaticRegisterNativesAGamejamHorrorPuzzleCharacter()
	{
	}
	struct Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Play SFX Footstep **/" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Play SFX Footstep *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamejamHorrorPuzzleCharacter, nullptr, "OnPlayerMoveSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_NoRegister()
	{
		return AGamejamHorrorPuzzleCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValuesToSprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValuesToSprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootStepInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FootStepInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValuesVolumeFootStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValuesVolumeFootStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound, "OnPlayerMoveSound" }, // 2225593789
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_NormalWalkSpeed_MetaData[] = {
		{ "Category", "WalkSpeed" },
		{ "Comment", "/**\n\x09* Variables\n\x09*/" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_NormalWalkSpeed = { "NormalWalkSpeed", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, NormalWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_NormalWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_NormalWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesToSprint_MetaData[] = {
		{ "Category", "WalkSpeed" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesToSprint = { "ValuesToSprint", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, ValuesToSprint), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesToSprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesToSprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FootStepInterval_MetaData[] = {
		{ "Category", "WalkSpeed" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FootStepInterval = { "FootStepInterval", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, FootStepInterval), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FootStepInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FootStepInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesVolumeFootStep_MetaData[] = {
		{ "Category", "WalkSpeed" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesVolumeFootStep = { "ValuesVolumeFootStep", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, ValuesVolumeFootStep), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesVolumeFootStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesVolumeFootStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, InteractDistance), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InteractDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InteractDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_Mesh1P,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_NormalWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesToSprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_FootStepInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_ValuesVolumeFootStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InteractDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamejamHorrorPuzzleCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::ClassParams = {
		&AGamejamHorrorPuzzleCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamejamHorrorPuzzleCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGamejamHorrorPuzzleCharacter, 4216932004);
	template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<AGamejamHorrorPuzzleCharacter>()
	{
		return AGamejamHorrorPuzzleCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGamejamHorrorPuzzleCharacter(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter, &AGamejamHorrorPuzzleCharacter::StaticClass, TEXT("/Script/GamejamHorrorPuzzle"), TEXT("AGamejamHorrorPuzzleCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamejamHorrorPuzzleCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
