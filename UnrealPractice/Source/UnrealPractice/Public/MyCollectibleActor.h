// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/DefaultPawn.h"

#include "MyCollectibleActor.generated.h"

UDELEGATE(BlueprintAuthorityOnly)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnJumpTriggerSignature, AActor*, OtherActor, UPrimitiveComponent*, OtherComp);

UCLASS()
class UNREALPRACTICE_API AMyCollectibleActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCollectibleActor();

	UFUNCTION(BlueprintCallable)
	void Jump(float velocity);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when other actors collide hits the collider
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float lifetime = 2.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Velocity = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass* triggerClass = ADefaultPawn::StaticClass();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Static mesh for rendering
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* staticMesh;

	UPROPERTY(EditDefaultsOnly)
	UBoxComponent* boxCollision;

	UPROPERTY(BlueprintAssignable)
	FOnJumpTriggerSignature onJumpTrigger;

	bool isLaunched = false;
};
