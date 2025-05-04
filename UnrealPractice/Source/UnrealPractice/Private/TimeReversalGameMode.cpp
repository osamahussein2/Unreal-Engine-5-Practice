// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeReversalGameMode.h"

void ATimeReversalGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	timeManager = Cast<ATimeManager>(GetWorld()->SpawnActor(ATimeManager::StaticClass()));

	if (!timeManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create timeManager."));
	}
}

ATimeManager* ATimeReversalGameMode::GetTimeManager()
{
	if (!timeManager)
	{
		UE_LOG(LogTemp, Error, TEXT("Tried to call GetTimeManager() before it existed."));
	}

	return timeManager;
}
