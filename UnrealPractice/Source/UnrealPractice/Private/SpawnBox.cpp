// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnBox.h"

// Sets default values
ASpawnBox::ASpawnBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Setup members
	spawnBox = CreateDefaultSubobject<UBoxComponent>(TEXT("SpawnBox"));
	RootComponent = spawnBox;
}

// Called when the game starts or when spawned
void ASpawnBox::BeginPlay()
{
	Super::BeginPlay();
	
	// Schedule first spawn
	if (shouldSpawn)
	{
		ScheduleActorSpawn();
	}
}

void ASpawnBox::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	// Remove all timers associated with this object's instance
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);

	//GetWorld()->GetTimerManager().ClearTimer(spawnTimerHandle);
}

// Called every frame
/*void ASpawnBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}*/

bool ASpawnBox::SpawnActor()
{
	bool spawnedActor = false;

	if (actorClassToBeSpawned)
	{
		// Calculate the extents of the box
		FBoxSphereBounds boxBounds = spawnBox->CalcBounds(GetActorTransform());

		// Compute a random position within the box bounds
		FVector spawnLocation = boxBounds.Origin;
		spawnLocation.X += -boxBounds.BoxExtent.X + 2 * boxBounds.BoxExtent.X * FMath::FRand();
		spawnLocation.Y += -boxBounds.BoxExtent.Y + 2 * boxBounds.BoxExtent.Y * FMath::FRand();
		spawnLocation.Z += -boxBounds.BoxExtent.Z + 2 * boxBounds.BoxExtent.Z * FMath::FRand();

		// Spawn the actor
		spawnedActor = GetWorld()->SpawnActor(actorClassToBeSpawned, &spawnLocation) != nullptr;
	}

	return spawnedActor;
}

void ASpawnBox::EnableActorSpawning(bool enabled)
{
	// Update internal state
	shouldSpawn = enabled;

	// Check which timer action should be done
	if (enabled)
	{
		ScheduleActorSpawn();
	}

	else
	{
		GetWorld()->GetTimerManager().ClearTimer(spawnTimerHandle);
	}
}

void ASpawnBox::ScheduleActorSpawn()
{
	// Step 1: compute time offset to spawn
	float deltaToNextSpawn = averageSpawnTime + (-randomSpawnTimeOffset + 2 * randomSpawnTimeOffset * 
		FMath::FRand());

	// Step 2: schedule spawning
	GetWorld()->GetTimerManager().SetTimer(spawnTimerHandle, this, &ASpawnBox::SpawnActorScheduled, deltaToNextSpawn, false);
}

void ASpawnBox::SpawnActorScheduled()
{
	// Spawn and reschedule if required
	if (SpawnActor())
	{
		if (shouldSpawn)
		{
			ScheduleActorSpawn();
		}
	}

	else
	{

	}
}

