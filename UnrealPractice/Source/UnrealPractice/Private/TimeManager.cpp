// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeManager.h"

// Sets default values
ATimeManager::ATimeManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ATimeManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	// Store recorded time
	if (timeReversalAbilityEnabled)
	{
		currentRecordedTime = TMathUtil<float>::Min(reverseTimeMaximum, currentRecordedTime + DeltaSeconds * currentTimeFactor);

		if (currentRecordedTime <= 0.0f)
		{
			EndTimeReverse();
			currentRecordedTime = 0.0f;
		}
	}
}

float ATimeManager::GetTimeFactor()
{
	return currentTimeFactor;
}

bool ATimeManager::GetAbilityAvailable()
{
	return timeReversalAbilityEnabled && currentRecordedTime >= reverseTimeThreshold;
}

float ATimeManager::GetCurrentReversableTime()
{
	return currentRecordedTime;
}

void ATimeManager::BeginTimeReverse()
{
	if (GetAbilityAvailable())
	{
		currentTimeFactor = reverseTimeFactor;
	}
}

void ATimeManager::EndTimeReverse()
{
	currentTimeFactor = normalTimeFactor;
}

void ATimeManager::EnableTimeReverseAbility()
{
	if (!timeReversalAbilityEnabled)
	{
		timeReversalAbilityEnabled = true;
	}
}

void ATimeManager::DisableTimeReverseAbility()
{
	if (timeReversalAbilityEnabled)
	{
		EndTimeReverse();
		currentRecordedTime = 0.0f;
		timeReversalAbilityEnabled = false;
	}
}

// Called when the game starts or when spawned
void ATimeManager::BeginPlay()
{
	Super::BeginPlay();
	
	// Apply normal time
	currentTimeFactor = normalTimeFactor;
}