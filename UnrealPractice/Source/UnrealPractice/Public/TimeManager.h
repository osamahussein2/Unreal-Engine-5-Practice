// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TimeManager.generated.h"

UCLASS()
class UNREALPRACTICE_API ATimeManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATimeManager();

	UFUNCTION(BlueprintCallable)
	float GetTimeFactor();

	UFUNCTION(BlueprintCallable)
	void BeginTimeReverse();

	UFUNCTION(BlueprintCallable)
	void EndTimeReverse();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadOnly)
	float currentTimeFactor = 1.0f; // Current actie factor of time

	// Magic time values
	UPROPERTY(BlueprintReadWrite)
	float normalTimeFactor = 1.0f;

	UPROPERTY(BlueprintReadWrite)
	float reverseTimeFactor = -3.0f;
};
