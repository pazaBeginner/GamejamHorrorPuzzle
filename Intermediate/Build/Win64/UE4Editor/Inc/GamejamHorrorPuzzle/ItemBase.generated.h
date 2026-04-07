// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEJAMHORRORPUZZLE_ItemBase_generated_h
#error "ItemBase.generated.h already included, missing '#pragma once' in ItemBase.h"
#endif
#define GAMEJAMHORRORPUZZLE_ItemBase_generated_h

#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_SPARSE_DATA
#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPickedUp);


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPickedUp);


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamejamHorrorPuzzle"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAItemBase(); \
	friend struct Z_Construct_UClass_AItemBase_Statics; \
public: \
	DECLARE_CLASS(AItemBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GamejamHorrorPuzzle"), NO_API) \
	DECLARE_SERIALIZER(AItemBase)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public:


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemBase(AItemBase&&); \
	NO_API AItemBase(const AItemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBase)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemMeshComp() { return STRUCT_OFFSET(AItemBase, ItemMeshComp); }


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_13_PROLOG
#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_SPARSE_DATA \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_RPC_WRAPPERS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_INCLASS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_PRIVATE_PROPERTY_OFFSET \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_SPARSE_DATA \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_INCLASS_NO_PURE_DECLS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<class AItemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_ItemBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
