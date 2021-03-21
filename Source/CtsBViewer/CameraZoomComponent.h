// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerComponent.h"
#include "CameraZoomComponent.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CTSBVIEWER_API UCameraZoomComponent : public UCtsViewerComponent
{
	GENERATED_BODY()

	// Override funzione
public:
	virtual void AttivaPlugin(class MovementBuffer& mb) override;
	
};
