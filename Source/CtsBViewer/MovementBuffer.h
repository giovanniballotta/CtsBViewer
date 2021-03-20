// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class CTSBVIEWER_API MovementBuffer
{
public:
	MovementBuffer();
	~MovementBuffer();

protected:
	FVector2D BufferMovimentoMouse;
	bool bStatoLMB;
	bool bStatoMMB;
	bool bStatoRMB;

public:
	FVector2D GetBufferMovimentoMouse() const;
	void SetBufferMovimentoMouse(FVector2D boof);
	bool IsStatoLMB() const;
	void SetStatoLMB(bool boof);
	bool IsStatoMmb() const;
	void SetStatoMmb(bool boof);
	bool IsStatoRMB() const;
	void SetStatoRMB(bool boof);
	void SetBufferMovimentoMouseX(float valore);
	void SetBufferMovimentoMouseY(float valore);


};
