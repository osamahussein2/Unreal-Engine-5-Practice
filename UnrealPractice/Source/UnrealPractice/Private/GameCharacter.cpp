// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCharacter.h"

// Sets default values
AGameCharacter::AGameCharacter()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create components
	cameraMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CameraMesh"));
	camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// Set up camera
	camera->FieldOfView = 120.0f;
	camera->SetupAttachment(cameraMesh);
	camera->SetRelativeLocation(FVector(-50.0f, 0.0f, 25.0f));
}

void AGameCharacter::MoveLRAction(float movementDelta)
{
	FVector newLocation = GetActorLocation();
	newLocation.Y += movementDelta * movementSpeed;

	SetActorLocation(newLocation);
}

// Called when the game starts or when spawned
void AGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Register for LB key movement
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &AGameCharacter::MoveLRAction);
}

