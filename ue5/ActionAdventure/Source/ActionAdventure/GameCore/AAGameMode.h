// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AAGameMode.generated.h"

UCLASS(minimalapi)
class AAAGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAAGameMode();


protected:

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "")
	FString TestString;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float TestFloat;
	
};



