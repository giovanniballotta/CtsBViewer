// Fill out your copyright notice in the Description page of Project Settings.


#include "CtsViewerPawnCamera.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


ACtsViewerPawnCamera::ACtsViewerPawnCamera()
{
	// Valori Predefiniti
	LunghezzaMinimaBraccio = 50.f;
	LunghezzaMassimaBraccio = 300.f;
	PosizioneInizialeCameraInBraccio = 100.f;

	// Geometrie
	ComponentePrincipale = CreateDefaultSubobject<USceneComponent>(TEXT("Componente Principale"));
	SetRootComponent(ComponentePrincipale);
	Braccio = CreateDefaultSubobject<USpringArmComponent>(TEXT("Braccio"));
	Braccio->SetupAttachment(GetRootComponent());
	Telecamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Telecamera"));
	Telecamera->SetupAttachment(Braccio);
	
}

float ACtsViewerPawnCamera::GetLunghezzaCorrenteBraccio() const
{
	return LunghezzaCorrenteBraccio;
}

void ACtsViewerPawnCamera::SetLunghezzaCorrenteBraccio(float valore)
{
	LunghezzaCorrenteBraccio = FMath::Clamp(valore, LunghezzaMinimaBraccio, LunghezzaMassimaBraccio);
}

float ACtsViewerPawnCamera::GetFattoreZoom() const
{
	return FattoreDiZoom;
}

void ACtsViewerPawnCamera::CalcolaFattoreZoom()
{
	FattoreDiZoom = (LunghezzaMassimaBraccio - LunghezzaCorrenteBraccio) / (LunghezzaMassimaBraccio - LunghezzaMinimaBraccio);
}

void ACtsViewerPawnCamera::BeginPlay()
{
	Super::BeginPlay();

	// Setup lunghezza del braccio come da parametri
	LunghezzaCorrenteBraccio = PosizioneInizialeCameraInBraccio;
	Braccio->TargetArmLength = LunghezzaCorrenteBraccio;

	// Calcolo del fattore di zoom iniziale
	CalcolaFattoreZoom();
}
