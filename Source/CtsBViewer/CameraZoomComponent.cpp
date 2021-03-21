// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraZoomComponent.h"


#include "CtsViewerPawnCamera.h"
#include "MovementBuffer.h"

void UCameraZoomComponent::AttivaPlugin(MovementBuffer& mb)
{
	Super::AttivaPlugin(mb);

	if (mb.IsStatoLMB())
	{
		float lunghezzaattuale = Possessore->GetLunghezzaCorrenteBraccio();
		lunghezzaattuale -= mb.GetBufferMovimentoMouse().Y;
		Possessore->SetLunghezzaCorrenteBraccio(lunghezzaattuale);
	}
}
