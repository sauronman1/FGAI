// Fill out your copyright notice in the Description page of Project Settings.


#include "FGHearingSenseComponent.h"
#include "FGGameInstance.h"
#include "Kismet/GameplayStatics.h"


// Sets default values for this component's properties
UFGHearingSenseComponent::UFGHearingSenseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UFGHearingSenseComponent::BeginPlay()
{
	Super::BeginPlay();
	Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->HearingComponents.Add(this);
	// ...
	
}

void UFGHearingSenseComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	//Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->HearingComponents.Remove(this);
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}

void UFGHearingSenseComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	Cast<UFGGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()))->HearingComponents.Remove(this);
}

// Called every frame
void UFGHearingSenseComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UFGHearingSenseComponent::HeardNoise(float NoiseRadius)
{
	
	UE_LOG(LogTemp, Warning, TEXT("We hear you"))
}


