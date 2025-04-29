// Fill out your copyright notice in the Description page of Project Settings.


#include "JumpActor.h"

// Sets default values
AJumpActor::AJumpActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create components
	jumpMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("JumpMesh"));
}

// Called when the game starts or when spawned
void AJumpActor::BeginPlay()
{
	Super::BeginPlay();
	
	// Store initial position
	startPos = GetActorLocation();
	currentOffset = jumpOffset;
}

// Called every frame
void AJumpActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Increment offset
	currentOffset += DeltaTime * jumpSpeed * currentDirection;

	// Clamp to bound and change direction if required
	if (currentDirection == 1 && currentOffset >= jumpHeight)
	{
		currentOffset = jumpHeight;
		currentDirection = -1;
	}

	else if (currentDirection == -1 && currentOffset <= 0.0f)
	{
		currentOffset = 0;
		currentDirection = 1;
	}

	// Set actor position
	FVector newPos = startPos;
	newPos.Z += currentOffset;

	SetActorLocation(newPos);
}

