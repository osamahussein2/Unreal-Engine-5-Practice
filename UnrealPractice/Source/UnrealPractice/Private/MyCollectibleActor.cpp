// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCollectibleActor.h"

// Sets default values
AMyCollectibleActor::AMyCollectibleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create root component for rendering
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = staticMesh;

	// Create collision box
	boxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	boxCollision->SetupAttachment(staticMesh);
}

void AMyCollectibleActor::Jump(float velocity)
{
	// Make sure jump is only executed once during runtime and not per frame
	if (!isLaunched)
	{
		// Execute jump using physics system
		staticMesh->AddImpulse({ 0.0f, 0.0f, velocity * 500.0f });

		// Initiate object destruction
		SetActorTickEnabled(true);
		SetActorTickInterval(1.0f);

		isLaunched = true;
	}
}

// Called when the game starts or when spawned
void AMyCollectibleActor::BeginPlay()
{
	Super::BeginPlay();

	FScriptDelegate delegateSubscriber;
	delegateSubscriber.BindUFunction(this, "OnComponentBeginOverlap");

	// Setup per instance OnComponentOverlap event
	boxCollision->OnComponentBeginOverlap.Add(delegateSubscriber);
	
	// Ticking is only required after launching
	SetActorTickEnabled(false);

	// Set up events here instead of the constructor
}

void AMyCollectibleActor::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, 
	const FHitResult& SweepResult)
{
	if (!isLaunched && OtherActor->IsA(triggerClass))
	{
		onJumpTrigger.Broadcast(OtherActor, OverlappedComponent);
	}
}

// Called every frame
void AMyCollectibleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isLaunched)
	{
		// Decrement lifetime
		lifetime -= DeltaTime;

		// Check actor destruction
		if (lifetime <= 0.0f)
		{
			Destroy();
		}
	}
}

