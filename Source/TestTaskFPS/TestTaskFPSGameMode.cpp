// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestTaskFPSGameMode.h"
#include "TestTaskFPSHUD.h"
#include "TestTaskFPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestTaskFPSGameMode::ATestTaskFPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestTaskFPSHUD::StaticClass();
}
