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
	GAMEJAMHORRORPUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FItemDataStruct();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGamejamHorrorPuzzleCharacter::execRemoveItemOnHolding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveItemOnHolding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGamejamHorrorPuzzleCharacter::execHoldItem)
	{
		P_GET_STRUCT(FItemDataStruct,Z_Param_ItemData);
		P_GET_PROPERTY(FIntProperty,Z_Param_clickedIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoldItem(Z_Param_ItemData,Z_Param_clickedIndex);
		P_NATIVE_END;
	}
	static FName NAME_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound = FName(TEXT("OnPlayerMoveSound"));
	void AGamejamHorrorPuzzleCharacter::OnPlayerMoveSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound),NULL);
	}
	void AGamejamHorrorPuzzleCharacter::StaticRegisterNativesAGamejamHorrorPuzzleCharacter()
	{
		UClass* Class = AGamejamHorrorPuzzleCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HoldItem", &AGamejamHorrorPuzzleCharacter::execHoldItem },
			{ "RemoveItemOnHolding", &AGamejamHorrorPuzzleCharacter::execRemoveItemOnHolding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics
	{
		struct GamejamHorrorPuzzleCharacter_eventHoldItem_Parms
		{
			FItemDataStruct ItemData;
			int32 clickedIndex;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_clickedIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::NewProp_ItemData = { "ItemData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamejamHorrorPuzzleCharacter_eventHoldItem_Parms, ItemData), Z_Construct_UScriptStruct_FItemDataStruct, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::NewProp_clickedIndex = { "clickedIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GamejamHorrorPuzzleCharacter_eventHoldItem_Parms, clickedIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::NewProp_ItemData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::NewProp_clickedIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09* Functions\n\x09*/" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamejamHorrorPuzzleCharacter, nullptr, "HoldItem", nullptr, nullptr, sizeof(GamejamHorrorPuzzleCharacter_eventHoldItem_Parms), Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Inventory" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGamejamHorrorPuzzleCharacter, nullptr, "RemoveItemOnHolding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding_Statics::FuncParams);
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeldItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InventoryWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInventoryWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInventoryWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentlyHeldItemIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CurrentlyHeldItemIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_HoldItem, "HoldItem" }, // 1102182019
		{ &Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_OnPlayerMoveSound, "OnPlayerMoveSound" }, // 2225593789
		{ &Z_Construct_UFunction_AGamejamHorrorPuzzleCharacter_RemoveItemOnHolding, "RemoveItemOnHolding" }, // 2143871242
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_HeldItemMesh_MetaData[] = {
		{ "Category", "Interact" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_HeldItemMesh = { "HeldItemMesh", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, HeldItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_HeldItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_HeldItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, PlayerInventory), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_PlayerInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_PlayerInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InventoryWidgetClass_MetaData[] = {
		{ "Category", "UI Inventory" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InventoryWidgetClass = { "InventoryWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, InventoryWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InventoryWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InventoryWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentInventoryWidget_MetaData[] = {
		{ "Category", "UI Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentInventoryWidget = { "CurrentInventoryWidget", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, CurrentInventoryWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentInventoryWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentInventoryWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentlyHeldItemIndex_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/**\n\x09* Variables\n\x09*/" },
		{ "ModuleRelativePath", "GamejamHorrorPuzzleCharacter.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentlyHeldItemIndex = { "CurrentlyHeldItemIndex", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamejamHorrorPuzzleCharacter, CurrentlyHeldItemIndex), METADATA_PARAMS(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentlyHeldItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentlyHeldItemIndex_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_HeldItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_PlayerInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_InventoryWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentInventoryWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamejamHorrorPuzzleCharacter_Statics::NewProp_CurrentlyHeldItemIndex,
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
	IMPLEMENT_CLASS(AGamejamHorrorPuzzleCharacter, 1322012640);
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
