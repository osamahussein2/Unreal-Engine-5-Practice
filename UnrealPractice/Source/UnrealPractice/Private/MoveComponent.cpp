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

void UMoveComponent::EnableMovement(bool shouldMove)
{
	// Assign value and set correct tick enable state
	moveEnable = shouldMove;
	SetComponentTickEnabled(moveEnable);
}

void UMoveComponent::ResetMovement()
{
	// Reset distance back to 0 and set its position to the origin
	curDistance = 0.0f;
	SetRelativeLocation(startRelativeLocation);
}

void UMoveComponent::SetMoveDirection(int Direction)
{
	moveDirection = Direction >= 1 ? 1 : -1;
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

	// Check if ticking is required
	this->SetComponentTickEnabled(moveEnable);
}


// Called every frame
void UMoveComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (moveEnable)
	{
		// Set the current distance
		curDistance += DeltaTime * speed * moveDirection;

		if (curDistance >= maxDistance || curDistance <= 0.0f)
		{
			// Invert direction
			moveDirection *= -1;

			// Fire event
			OnEndpointReached.Broadcast(curDistance >= maxDistance);

			// Clamp distance
			curDistance = FMath::Clamp(curDistance, 0.0f, maxDistance);
		}
	}

	// Compute and set current location
	SetRelativeLocation(startRelativeLocation + moveOffsetNorm * curDistance);
}

