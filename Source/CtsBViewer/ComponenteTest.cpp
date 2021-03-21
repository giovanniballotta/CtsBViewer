// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteTest.h"

#include "CtsViewerPawnCamera.h"
#include "MovementBuffer.h"

void UComponenteTest::AttivaPlugin(MovementBuffer& mb)
{
	Super::AttivaPlugin(mb);

	FRotator rotobuf = FRotator(0.0f, mb.GetBufferMovimentoMouse().X, 0.0f);
	Possessore->AddActorLocalRotation(rotobuf);
}
