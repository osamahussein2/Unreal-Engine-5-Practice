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
	if (DefaultPawnClass == ADefaultPawn::StaticClass())
	{
		// Update to custom implementation
		DefaultPawnClass = customXPPawnClass;
	}

}
