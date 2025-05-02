// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "Engine/StaticMesh.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

#include "XPCharacter.generated.h"

UCLASS()
class UNREALPRACTICE_API AXPCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AXPCharacter();

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
