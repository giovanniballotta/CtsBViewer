// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraRotationComponent.h"


#include "CtsViewerPawnCamera.h"
#include "MovementBuffer.h"
#include "GameFramework/SpringArmComponent.h"

UCameraRotationComponent::UCameraRotationComponent()
{
	// Defaults
	MoltiplicatoreVelocitaRotazione = 1.0f;
	LimiteMinimoRotazioneY = 10.f;
	LimiteMassimoRotazioneY = 85.f;
}

void UCameraRotationComponent::AttivaPlugin(MovementBuffer& mb)
{
	Super::AttivaPlugin(mb);

	if (!mb.IsStatoRMB() && !mb.IsStatoLMB() && !mb.IsStatoMmb())
	{
		FRotator NuovaRotazione = FRotator(mb.GetBufferMovimentoMouse().Y, mb.GetBufferMovimentoMouse().X, 0.0f);
		NuovaRotazione *= MoltiplicatoreVelocitaRotazione;
		// NuovaRotazione.Pitch = FMath::Clamp(NuovaRotazione.Pitch, LimiteMassimoRotazioneY * -1.f, LimiteMinimoRotazioneY * -1.f);
		// Possessore->AddActorWorldRotation(FRotator(0.0f, NuovaRotazione.Yaw, 0.0f));
		Possessore->Braccio->AddWorldRotation(FRotator(0.0f, NuovaRotazione.Yaw, 0.0f));
		Possessore->Braccio->AddLocalRotation(FRotator(NuovaRotazione.Pitch, 0.0f, 0.0f));
	}
}
