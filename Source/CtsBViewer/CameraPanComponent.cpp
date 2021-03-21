// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraPanComponent.h"

#include "CtsViewerPawnCamera.h"

UCameraPanComponent::UCameraPanComponent()
{
	// Defaults
	bSwitchRitornoPosizioneIniziale = false;
	TempoRitornoAPosizioneIniziale = 1.0f;
}

void UCameraPanComponent::AttivaPlugin(MovementBuffer& mb)
{
	Super::AttivaPlugin(mb);

	if(mb.IsStatoRMB())
	{
		PannaTelecamera(mb);
	}
	if(mb.IsStatoMmb())
	{
		PosizioneFinale = Possessore->GetActorLocation();
		bSwitchRitornoPosizioneIniziale = true;
	}
}

void UCameraPanComponent::BeginPlay()
{
	Super::BeginPlay();
	RegistraPosizioneIniziale();
}

void UCameraPanComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (bSwitchRitornoPosizioneIniziale)
	{
		LerpaAPosizioneIniziale(DeltaTime);
	}
}

void UCameraPanComponent::RegistraPosizioneIniziale()
{
	PosizioneIniziale = Possessore->GetActorLocation();
	RotazioneIniziale = Possessore->GetActorRotation();
}

void UCameraPanComponent::PannaTelecamera(MovementBuffer& mbb)
{
	Possessore->AddActorLocalOffset(FVector(mbb.GetBufferMovimentoMouse().Y, mbb.GetBufferMovimentoMouse().X, 0.0f));
}

void UCameraPanComponent::LerpaAPosizioneIniziale(float dtime)
{
	static float cronometro;
	cronometro += dtime;
	if (cronometro < TempoRitornoAPosizioneIniziale)
	{
		FVector posizionetemporanea = FMath::Lerp(PosizioneFinale, PosizioneIniziale, (cronometro / TempoRitornoAPosizioneIniziale));
		Possessore->SetActorLocation(posizionetemporanea);
	} else
	{
		cronometro = 0.0f;
		Possessore->SetActorLocation(PosizioneIniziale);
		bSwitchRitornoPosizioneIniziale = false;
	}
}
