// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamejamHorrorPuzzle/ItemDataStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemDataStruct() {}
// Cross Module References
	GAMEJAMHORRORPUZZLE_API UScriptStruct* Z_Construct_UScriptStruct_FItemDataStruct();
	UPackage* Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FItemDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FItemDataStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEJAMHORRORPUZZLE_API uint32 Get_Z_Construct_UScriptStruct_FItemDataStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemDataStruct, Z_Construct_UPackage__Script_GamejamHorrorPuzzle(), TEXT("ItemDataStruct"), sizeof(FItemDataStruct), Get_Z_Construct_UScriptStruct_FItemDataStruct_Hash());
	}
	return Singleton;
}
template<> GAMEJAMHORRORPUZZLE_API UScriptStruct* StaticStruct<FItemDataStruct>()
{
	return FItemDataStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemDataStruct(FItemDataStruct::StaticStruct, TEXT("/Script/GamejamHorrorPuzzle"), TEXT("ItemDataStruct"), false, nullptr, nullptr);
static struct FScriptStruct_GamejamHorrorPuzzle_StaticRegisterNativesFItemDataStruct
{
	FScriptStruct_GamejamHorrorPuzzle_StaticRegisterNativesFItemDataStruct()
	{
		UScriptStruct::DeferCppStructOps<FItemDataStruct>(FName(TEXT("ItemDataStruct")));
	}
} ScriptStruct_GamejamHorrorPuzzle_StaticRegisterNativesFItemDataStruct;
	struct Z_Construct_UScriptStruct_FItemDataStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsKeyItem_MetaData[];
#endif
		static void NewProp_bIsKeyItem_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsKeyItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemDataStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDataStruct, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemType_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDataStruct, ItemType), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDataStruct, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDataStruct, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDataStruct, ItemIcon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemDataStruct, ItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem_MetaData[] = {
		{ "Category", "ItemDataStruct" },
		{ "ModuleRelativePath", "ItemDataStruct.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem_SetBit(void* Obj)
	{
		((FItemDataStruct*)Obj)->bIsKeyItem = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem = { "bIsKeyItem", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FItemDataStruct), &Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemDataStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_ItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemDataStruct_Statics::NewProp_bIsKeyItem,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ItemDataStruct",
		sizeof(FItemDataStruct),
		alignof(FItemDataStruct),
		Z_Construct_UScriptStruct_FItemDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemDataStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemDataStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemDataStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemDataStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemDataStruct"), sizeof(FItemDataStruct), Get_Z_Construct_UScriptStruct_FItemDataStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemDataStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemDataStruct_Hash() { return 1603374425U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
