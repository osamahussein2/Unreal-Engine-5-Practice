// Fill out your copyright notice in the Description page of Project Settings.


#include "XPCharacter.h"

// Sets default values
AXPCharacter::AXPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Setup component hierarchy
	playerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlayerMesh"));
	playerMesh->SetupAttachment(GetCapsuleComponent());

	playerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	playerCamera->SetupAttachment(GetCapsuleComponent());
}

// Called when the game starts or when spawned
void AXPCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveFB"), this, &AXPCharacter::MoveFB);
	PlayerInputComponent->BindAxis(TEXT("MoveLR"), this, &AXPCharacter::MoveLR);
	PlayerInputComponent->BindAxis(TEXT("RotateCamera"), this, &AXPCharacter::RotateCamera);
}

void AXPCharacter::MoveFB(float value)
{
	AddMovementInput(GetActorForwardVector(), value * moveSpeed);
}

void AXPCharacter::MoveLR(float value)
{
	AddMovementInput(-GetActorRightVector(), value * moveSpeed);
}

void AXPCharacter::RotateCamera(float value)
{
	AddControllerYawInput(value * rotationSpeed);
}