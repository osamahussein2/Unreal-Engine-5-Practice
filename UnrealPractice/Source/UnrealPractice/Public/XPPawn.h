// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"

#include "Engine/StaticMesh.h"
#include "Camera/CameraComponent.h"

#include "XPPawn.generated.h"

UCLASS()
class UNREALPRACTICE_API AXPPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AXPPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* playerMesh;

	UPROPERTY(EditDefaultsOnly)
	UCameraComponent* playerCamera;

	void MoveFB(float value);
	void MoveLR(float value);

	void RotateCamera(float value);

	UPROPERTY(EditAnywhere)
	float moveSpeed = 1.0f;

	UPROPERTY(EditAnywhere)
	float rotationSpeed = 1.0f;
};
