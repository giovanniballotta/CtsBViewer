// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerComponent.h"
#include "HotspotComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CTSBVIEWER_API UHotspotComponent : public UCtsViewerComponent
{
	GENERATED_BODY()

public:
	UHotspotComponent();
	UPROPERTY(EditAnywhere)
	TArray<ACameraActor*> ListaTelecamere;

	virtual void AttivaPlugin(MovementBuffer& mb) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	bool bPrimoSpostamento;
	bool bSpostamentoBloccato;
	ACameraActor* TelecameraPartenza;
	ACameraActor* TelecameraArrivo;

	virtual void BeginPlay() override;
	void ComputaTelecamere();
	void LerpaTelecamere(ACameraActor* CameraPartenza, ACameraActor* CameraArrivo);
	
};
