// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MovementBuffer.h"
#include "CtsViewerBasePawn.generated.h"


UCLASS()
class CTSBVIEWER_API ACtsViewerBasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACtsViewerBasePawn();

	// Funzionalita sulle pressioni dei tasti
	void LMBPremuto();
	void LMBRilasciato();
	void MMBPremuto();
	void MMBRilasciato();
	void RMBPremuto();
	void RMBRilasciato();
	void MouseOrizzontale(float axisvalue);
	void MouseVerticale(float axisvalue);

	// Buffer movimenti
	class MovementBuffer BufferMovimento;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
