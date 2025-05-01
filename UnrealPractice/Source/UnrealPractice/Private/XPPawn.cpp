// Fill out your copyright notice in the Description page of Project Settings.


#include "XPPawn.h"

// Sets default values
AXPPawn::AXPPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup component hierarchy
	playerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	RootComponent = playerMesh;

	playerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	playerCamera->SetupAttachment(playerMesh);
}

// Called when the game starts or when spawned
void AXPPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXPPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXPPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveFB"), this, &AXPPawn::MoveFB);
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &AXPPawn::MoveLR);
	PlayerInputComponent->BindAxis(TEXT("RotateCamera"), this, &AXPPawn::RotateCamera);
}

void AXPPawn::MoveFB(float value)
{
	auto location = GetActorLocation();
	location += GetActorForwardVector() * value * moveSpeed;

	SetActorLocation(location);
}

void AXPPawn::MoveLR(float value)
{
	auto location = GetActorLocation();
	location += -GetActorRightVector() * value * moveSpeed;

	SetActorLocation(location);
}

void AXPPawn::RotateCamera(float value)
{
	auto rotation = GetActorRotation();
	rotation.Yaw += value * rotationSpeed;

	SetActorRotation(rotation);
}
