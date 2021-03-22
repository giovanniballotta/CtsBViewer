// Fill out your copyright notice in the Description page of Project Settings.


#include "HotspotComponent.h"

UHotspotComponent::UHotspotComponent()
{
	bPrimoSpostamento = true;
	bSpostamentoBloccato = true;
}

void UHotspotComponent::AttivaPlugin(MovementBuffer& mb)
{
	Super::AttivaPlugin(mb);
}

void UHotspotComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UHotspotComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UHotspotComponent::ComputaTelecamere()
{
}
