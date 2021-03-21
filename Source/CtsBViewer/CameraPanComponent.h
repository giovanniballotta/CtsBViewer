// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerComponent.h"
#include "CameraPanComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CTSBVIEWER_API UCameraPanComponent : public UCtsViewerComponent
{
	GENERATED_BODY()

	// Override funzioni
public:
	UCameraPanComponent();
	virtual void AttivaPlugin(MovementBuffer& mb) override;
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Vettore e rotatore della posizione iniziale
protected:
	FVector PosizioneIniziale;
	FRotator RotazioneIniziale;
	void RegistraPosizioneIniziale();

	// Vettore della posizione finale
protected:
	FVector PosizioneFinale;

	// Funzione Pan
protected:
	void PannaTelecamera(MovementBuffer& mbb);

	// Funzionalita per ritorno alla posizione iniziale
public:
	UPROPERTY(EditAnywhere)
	float TempoRitornoAPosizioneIniziale;
protected:
	bool bSwitchRitornoPosizioneIniziale;
	void LerpaAPosizioneIniziale(float dtime);
	
};
