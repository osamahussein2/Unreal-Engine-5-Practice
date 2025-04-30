// Fill out your copyright notice in the Description page of Project Settings.

#include "MoveComponentVisualizer.h"

void FMoveComponentVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	// Get move component here
	const UMoveComponent* moveComponent = Cast<UMoveComponent>(Component);

	if (moveComponent)
	{
		PDI->DrawLine(moveComponent->GetComponentLocation(),
			moveComponent->GetComponentLocation() + moveComponent->moveOffset, 
			FLinearColor::Red, SDPG_Foreground);
	}
}
