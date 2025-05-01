// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "SpawnBox.generated.h"

UCLASS()
class UNREALPRACTICE_API ASpawnBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the actor stops playing
	void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	bool SpawnActor();

	// Change if actors are spawned
	UFUNCTION(BlueprintCallable)
	void EnableActorSpawning(bool enabled);

	// Actor class to spawn
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> actorClassToBeSpawned;

	// Timing parameters
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float averageSpawnTime = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float randomSpawnTimeOffset = 1.0f;

private:
	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* spawnBox; // Box in which we spawn the actors

	UPROPERTY(EditAnywhere)
	bool shouldSpawn = true;

	// Helper for timing
	FTimerHandle spawnTimerHandle;

	void ScheduleActorSpawn();

	// This needs a UFUNCTION macro because timers need this
	UFUNCTION()
	void SpawnActorScheduled();
};
