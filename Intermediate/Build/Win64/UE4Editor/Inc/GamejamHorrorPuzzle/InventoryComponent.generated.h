// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemDataStruct;
#ifdef GAMEJAMHORRORPUZZLE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define GAMEJAMHORRORPUZZLE_InventoryComponent_generated_h

#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_10_DELEGATE \
static inline void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated) \
{ \
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_SPARSE_DATA
#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInventoryContents); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInventoryContents); \
	DECLARE_FUNCTION(execAddItemToInventory);


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamejamHorrorPuzzle"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamejamHorrorPuzzle"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InventoryContents() { return STRUCT_OFFSET(UInventoryComponent, InventoryContents); }


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_12_PROLOG
#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_SPARSE_DATA \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_RPC_WRAPPERS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_INCLASS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_SPARSE_DATA \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
