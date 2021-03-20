// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerBasePawn.h"
#include "CtsViewerPawnCamera.generated.h"

/**
 * 
 */
UCLASS()
class CTSBVIEWER_API ACtsViewerPawnCamera : public ACtsViewerBasePawn
{
	GENERATED_BODY()

public:

	ACtsViewerPawnCamera();

	// Parametri
	UPROPERTY(EditAnywhere)
	float LunghezzaMinimaBraccio;
	UPROPERTY(EditAnywhere)
	float LunghezzaMassimaBraccio;
	UPROPERTY(EditAnywhere)
	float PosizioneInizialeCameraInBraccio;

	// Geometrie
	UPROPERTY(EditAnywhere)
	USceneComponent* ComponentePrincipale;
	UPROPERTY(EditAnywhere)
	class USpringArmComponent* Braccio;
	UPROPERTY(EditAnywhere)
	class UCameraComponent* Telecamera;

	// Getters e setters
	float GetLunghezzaCorrenteBraccio() const;
	void SetLunghezzaCorrenteBraccio(float valore);
	float GetFattoreZoom() const;

protected:
	float LunghezzaCorrenteBraccio;
	float FattoreDiZoom;
	void CalcolaFattoreZoom();

	// Override BeginPlay
protected:
	virtual void BeginPlay() override;
	
};
