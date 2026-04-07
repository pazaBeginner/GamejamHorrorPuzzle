// Copyright Epic Games, Inc. All Rights Reserved.

#include "GamejamHorrorPuzzleGameMode.h"
#include "GamejamHorrorPuzzleHUD.h"
#include "GamejamHorrorPuzzleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGamejamHorrorPuzzleGameMode::AGamejamHorrorPuzzleGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/Player"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGamejamHorrorPuzzleHUD::StaticClass();
}
