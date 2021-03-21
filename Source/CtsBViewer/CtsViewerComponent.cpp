// Fill out your copyright notice in the Description page of Project Settings.


#include "CtsViewerComponent.h"
#include "CtsViewerPawnCamera.h"

// Sets default values for this component's properties
UCtsViewerComponent::UCtsViewerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void UCtsViewerComponent::AttivaPlugin(MovementBuffer& mb)
{
}

// Called when the game starts
void UCtsViewerComponent::BeginPlay()
{
	Super::BeginPlay();

	Possessore = Cast<ACtsViewerPawnCamera>(GetWorld()->GetFirstPlayerController()->GetPawn());
	
}


// Called every frame
void UCtsViewerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

