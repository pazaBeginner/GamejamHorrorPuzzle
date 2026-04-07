// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef GAMEJAMHORRORPUZZLE_BPI_Interactable_generated_h
#error "BPI_Interactable.generated.h already included, missing '#pragma once' in BPI_Interactable.h"
#endif
#define GAMEJAMHORRORPUZZLE_BPI_Interactable_generated_h

#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_SPARSE_DATA
#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_RPC_WRAPPERS \
	virtual void ExecuteInteraction_Implementation(AActor* Interactor) {}; \
 \
	DECLARE_FUNCTION(execExecuteInteraction);


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecuteInteraction_Implementation(AActor* Interactor) {}; \
 \
	DECLARE_FUNCTION(execExecuteInteraction);


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_EVENT_PARMS \
	struct BPI_Interactable_eventExecuteInteraction_Parms \
	{ \
		AActor* Interactor; \
	};


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_CALLBACK_WRAPPERS
#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEJAMHORRORPUZZLE_API UBPI_Interactable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_Interactable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEJAMHORRORPUZZLE_API, UBPI_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_Interactable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEJAMHORRORPUZZLE_API UBPI_Interactable(UBPI_Interactable&&); \
	GAMEJAMHORRORPUZZLE_API UBPI_Interactable(const UBPI_Interactable&); \
public:


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEJAMHORRORPUZZLE_API UBPI_Interactable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEJAMHORRORPUZZLE_API UBPI_Interactable(UBPI_Interactable&&); \
	GAMEJAMHORRORPUZZLE_API UBPI_Interactable(const UBPI_Interactable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEJAMHORRORPUZZLE_API, UBPI_Interactable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_Interactable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_Interactable)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_Interactable(); \
	friend struct Z_Construct_UClass_UBPI_Interactable_Statics; \
public: \
	DECLARE_CLASS(UBPI_Interactable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GamejamHorrorPuzzle"), GAMEJAMHORRORPUZZLE_API) \
	DECLARE_SERIALIZER(UBPI_Interactable)


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_GENERATED_UINTERFACE_BODY() \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_Interactable() {} \
public: \
	typedef UBPI_Interactable UClassType; \
	typedef IBPI_Interactable ThisClass; \
	static void Execute_ExecuteInteraction(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBPI_Interactable() {} \
public: \
	typedef UBPI_Interactable UClassType; \
	typedef IBPI_Interactable ThisClass; \
	static void Execute_ExecuteInteraction(UObject* O, AActor* Interactor); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_10_PROLOG \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_EVENT_PARMS


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_SPARSE_DATA \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_RPC_WRAPPERS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_CALLBACK_WRAPPERS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_SPARSE_DATA \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_CALLBACK_WRAPPERS \
	GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<class UBPI_Interactable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GamejamHorrorPuzzle_Source_GamejamHorrorPuzzle_BPI_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
