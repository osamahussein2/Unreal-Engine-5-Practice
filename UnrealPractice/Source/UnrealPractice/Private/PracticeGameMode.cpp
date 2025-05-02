// Fill out your copyright notice in the Description page of Project Settings.


#include "PracticeGameMode.h"

APracticeGameMode::APracticeGameMode()
{
	//DefaultPawnClass = AGameCharacter::StaticClass();
}

void APracticeGameMode::InitGameState()
{
	Super::InitGameState();

	// Check if no hard override is active
	if (DefaultPawnClass == ADefaultPawn::StaticClass() || !DefaultPawnClass)
	{
		// Update to custom implementation
		DefaultPawnClass = customXPCharacterClass;
	}

}
