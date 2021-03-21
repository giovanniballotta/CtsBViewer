// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerComponent.h"
#include "CameraRotationComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CTSBVIEWER_API UCameraRotationComponent : public UCtsViewerComponent
{
	GENERATED_BODY()

public:
	UCameraRotationComponent();

	// Parametri
public:
	UPROPERTY(EditAnywhere)
	float MoltiplicatoreVelocitaRotazione;
	UPROPERTY(EditAnywhere)
	float LimiteMinimoRotazioneY;
	UPROPERTY(EditAnywhere)
	float LimiteMassimoRotazioneY;

public:	
	// Funzione di azione
	virtual void AttivaPlugin(class MovementBuffer& mb);
};
