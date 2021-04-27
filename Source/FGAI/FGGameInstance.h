// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "FGGameInstance.generated.h"
class UFGHearingSenseComponent;

UCLASS()
class UFGGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	TArray<UFGHearingSenseComponent*> HearingComponents;
};
