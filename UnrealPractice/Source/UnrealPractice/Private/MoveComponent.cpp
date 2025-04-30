// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveComponent.h"

// Sets default values for this component's properties
UMoveComponent::UMoveComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMoveComponent::BeginPlay()
{
	Super::BeginPlay();

	// Set start location
	startRelativeLocation = GetRelativeLocation();

	// Compute normalized movement
	moveOffsetNorm = moveOffset;
	moveOffsetNorm.Normalize();
	maxDistance = moveOffset.Length();
}


// Called every frame
void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Set the current distance
	curDistance += DeltaTime * speed * moveDirection;

	if (curDistance >= maxDistance || curDistance <= 0.0f)
		moveDirection *= -1;

	// Compute and set current location
	SetRelativeLocation(startRelativeLocation + moveOffsetNorm * curDistance);
}

