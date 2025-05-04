// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MathUtil.h"
#include "GameFramework/Actor.h"
#include "TimeManager.generated.h"

UCLASS()
class UNREALPRACTICE_API ATimeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeManager();

	void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable)
	float GetTimeFactor();

	UFUNCTION(BlueprintCallable)
	bool GetAbilityAvailable();

	UFUNCTION(BlueprintCallable)
	float GetCurrentReversableTime();

	UFUNCTION(BlueprintCallable)
	void BeginTimeReverse();

	UFUNCTION(BlueprintCallable)
	void EndTimeReverse();

	// Enable controls
	UFUNCTION(BlueprintCallable)
	void EnableTimeReverseAbility();

	UFUNCTION(BlueprintCallable)
	void DisableTimeReverseAbility();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	// Current state of ability
	UPROPERTY(BlueprintReadOnly)
	float currentTimeFactor = 1.0f; // Current actie factor of time

	UPROPERTY(BlueprintReadOnly)
	float currentRecordedTime = 0.0f;

	// State helper
	UPROPERTY(BlueprintReadOnly)
	bool timeReversalAbilityEnabled = false;

public:
	// Global ability preset
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float normalTimeFactor = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float reverseTimeFactor = -3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float reverseTimeThreshold = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float reverseTimeMaximum = 15.0f;
};
