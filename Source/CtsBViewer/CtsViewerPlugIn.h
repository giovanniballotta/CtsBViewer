// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerPawnCamera.h"
#include "CtsViewerPlugIn.generated.h"

/**
 * 
 */
UCLASS()
class CTSBVIEWER_API ACtsViewerPlugIn : public ACtsViewerPawnCamera
{
	GENERATED_BODY()

	// Lista Plugins inseriti
	TArray<class UCtsViewerComponent*> ListaComponenti;

	// Funzione di azione
	void AzionaPlugins(class MovementBuffer& movb);

	// Override BeginPlay
	protected:
	virtual void BeginPlay() override;

	public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
