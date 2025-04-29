// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameCharacter.generated.h"

UCLASS()
class UNREALPRACTICE_API AGameCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGameCharacter();

	// Delta movement
	void MoveLRAction(float movementDelta);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)

	// Main pawn camera
	UCameraComponent* camera;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* cameraMesh;

	UPROPERTY(EditAnywhere, Category = "Character Settings")

	// Move speed
	float movementSpeed = 1.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
