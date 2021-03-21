// Fill out your copyright notice in the Description page of Project Settings.


#include "CtsViewerPlugIn.h"
#include "CtsViewerComponent.h"

void ACtsViewerPlugIn::AzionaPlugins(MovementBuffer& movb)
{
	if (ListaComponenti.Num() > 0)
	{
		for (UCtsViewerComponent* componente : ListaComponenti)
		{
			componente->AttivaPlugin(movb);
		}
	}
}

void ACtsViewerPlugIn::BeginPlay()
{
	Super::BeginPlay();

	// Raccolta Componenti
	GetComponents<UCtsViewerComponent>(ListaComponenti);
}

void ACtsViewerPlugIn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AzionaPlugins(BufferMovimento);
}
