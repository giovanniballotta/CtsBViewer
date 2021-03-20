// Fill out your copyright notice in the Description page of Project Settings.


#include "CtsViewerBasePawn.h"
#include "MovementBuffer.h"

// Sets default values
ACtsViewerBasePawn::ACtsViewerBasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACtsViewerBasePawn::LMBPremuto()
{
	BufferMovimento.SetStatoLMB(true);
}

void ACtsViewerBasePawn::LMBRilasciato()
{
	BufferMovimento.SetStatoLMB(false);
}

void ACtsViewerBasePawn::MMBPremuto()
{
	BufferMovimento.SetStatoMmb(true);
}

void ACtsViewerBasePawn::MMBRilasciato()
{
	BufferMovimento.SetStatoMmb(false);
}

void ACtsViewerBasePawn::RMBPremuto()
{
	BufferMovimento.SetStatoRMB(true);
}

void ACtsViewerBasePawn::RMBRilasciato()
{
	BufferMovimento.SetStatoRMB(false);
}

void ACtsViewerBasePawn::MouseOrizzontale(float axisvalue)
{
	BufferMovimento.SetBufferMovimentoMouseX(axisvalue);
}

void ACtsViewerBasePawn::MouseVerticale(float axisvalue)
{
	BufferMovimento.SetBufferMovimentoMouseY(axisvalue);
}

// Called when the game starts or when spawned
void ACtsViewerBasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACtsViewerBasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACtsViewerBasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Binding delle funzioni ai tasti
	PlayerInputComponent->BindAction(TEXT("LMB"), IE_Pressed, this, &ACtsViewerBasePawn::LMBPremuto);
	PlayerInputComponent->BindAction(TEXT("LMB"), IE_Released, this, &ACtsViewerBasePawn::LMBRilasciato);
	PlayerInputComponent->BindAction(TEXT("MMB"), IE_Pressed, this, &ACtsViewerBasePawn::MMBPremuto);
	PlayerInputComponent->BindAction(TEXT("MMB"), IE_Released, this, &ACtsViewerBasePawn::MMBRilasciato);
	PlayerInputComponent->BindAction(TEXT("RMB"), IE_Pressed, this, &ACtsViewerBasePawn::RMBPremuto);
	PlayerInputComponent->BindAction(TEXT("RMB"), IE_Released, this, &ACtsViewerBasePawn::RMBRilasciato);
	PlayerInputComponent->BindAxis(TEXT("MouseX"), this, &ACtsViewerBasePawn::MouseOrizzontale);
	PlayerInputComponent->BindAxis(TEXT("MouseY"), this, &ACtsViewerBasePawn::MouseVerticale);

}

