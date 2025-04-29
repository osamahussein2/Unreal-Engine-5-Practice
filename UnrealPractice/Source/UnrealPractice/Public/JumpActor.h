// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JumpActor.generated.h"

UCLASS()
class UNREALPRACTICE_API AJumpActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AJumpActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh component
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* jumpMesh;

	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	float jumpHeight = 200.0f;

	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	float jumpOffset = 0.0f;

	UPROPERTY(EditAnywhere, Category = "Jump Settings")
	float jumpSpeed = 1.0f;

private:
	FVector startPos; // where actor was spawned
	float currentOffset = 0.0f; // current offset relative to start

	int currentDirection = 1; // direction in which jump is executed

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
