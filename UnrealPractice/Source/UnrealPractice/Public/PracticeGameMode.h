// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCharacter.h"

#include "GameFramework/GameModeBase.h"
#include "GameFramework/DefaultPawn.h"

#include "UnrealPractice/Public/XPCharacter.h"

#include "PracticeGameMode.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPRACTICE_API APracticeGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	APracticeGameMode();

	void InitGameState() override;
	
private:
	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<AXPCharacter> customXPCharacterClass = AXPCharacter::StaticClass();
};
