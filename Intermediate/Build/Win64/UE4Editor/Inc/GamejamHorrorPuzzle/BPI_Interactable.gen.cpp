// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamejamHorrorPuzzle/BPI_Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPI_Interactable() {}
// Cross Module References
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_UBPI_Interactable_NoRegister();
	GAMEJAMHORRORPUZZLE_API UClass* Z_Construct_UClass_UBPI_Interactable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GamejamHorrorPuzzle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IBPI_Interactable::execExecuteInteraction)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteInteraction_Implementation(Z_Param_Interactor);
		P_NATIVE_END;
	}
	void IBPI_Interactable::ExecuteInteraction(AActor* Interactor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteInteraction instead.");
	}
	void UBPI_Interactable::StaticRegisterNativesUBPI_Interactable()
	{
		UClass* Class = UBPI_Interactable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteInteraction", &IBPI_Interactable::execExecuteInteraction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPI_Interactable_eventExecuteInteraction_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::NewProp_Interactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "BPI_Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPI_Interactable, nullptr, "ExecuteInteraction", nullptr, nullptr, sizeof(BPI_Interactable_eventExecuteInteraction_Parms), Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPI_Interactable_NoRegister()
	{
		return UBPI_Interactable::StaticClass();
	}
	struct Z_Construct_UClass_UBPI_Interactable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPI_Interactable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GamejamHorrorPuzzle,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPI_Interactable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPI_Interactable_ExecuteInteraction, "ExecuteInteraction" }, // 1349151433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPI_Interactable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPI_Interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPI_Interactable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_Interactable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPI_Interactable_Statics::ClassParams = {
		&UBPI_Interactable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBPI_Interactable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_Interactable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPI_Interactable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPI_Interactable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPI_Interactable, 1233556050);
	template<> GAMEJAMHORRORPUZZLE_API UClass* StaticClass<UBPI_Interactable>()
	{
		return UBPI_Interactable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPI_Interactable(Z_Construct_UClass_UBPI_Interactable, &UBPI_Interactable::StaticClass, TEXT("/Script/GamejamHorrorPuzzle"), TEXT("UBPI_Interactable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPI_Interactable);
	static FName NAME_UBPI_Interactable_ExecuteInteraction = FName(TEXT("ExecuteInteraction"));
	void IBPI_Interactable::Execute_ExecuteInteraction(UObject* O, AActor* Interactor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBPI_Interactable::StaticClass()));
		BPI_Interactable_eventExecuteInteraction_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBPI_Interactable_ExecuteInteraction);
		if (Func)
		{
			Parms.Interactor=Interactor;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBPI_Interactable*)(O->GetNativeInterfaceAddress(UBPI_Interactable::StaticClass())))
		{
			I->ExecuteInteraction_Implementation(Interactor);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
