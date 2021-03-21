// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CtsViewerComponent.h"
#include "ComponenteTest.generated.h"

/**
 * 
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CTSBVIEWER_API UComponenteTest : public UCtsViewerComponent
{
	GENERATED_BODY()

public:
	virtual void AttivaPlugin(class MovementBuffer& mb) override;
	
};
