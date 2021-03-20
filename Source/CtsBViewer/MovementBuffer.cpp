// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementBuffer.h"

MovementBuffer::MovementBuffer()
{
	BufferMovimentoMouse = FVector2D(0.0f);
	bStatoMMB = false;
	bStatoLMB = false;
	bStatoRMB = false;
}

MovementBuffer::~MovementBuffer()
{
}

FVector2D MovementBuffer::GetBufferMovimentoMouse() const
{
	return BufferMovimentoMouse;
}

void MovementBuffer::SetBufferMovimentoMouse(FVector2D boof)
{
	this->BufferMovimentoMouse = boof;
}

bool MovementBuffer::IsStatoLMB() const
{
	return bStatoLMB;
}

void MovementBuffer::SetStatoLMB(bool boof)
{
	this->bStatoLMB = boof;
}

bool MovementBuffer::IsStatoMmb() const
{
	return bStatoMMB;
}

void MovementBuffer::SetStatoMmb(bool boof)
{
	bStatoMMB = boof;
}

bool MovementBuffer::IsStatoRMB() const
{
	return bStatoRMB;
}

void MovementBuffer::SetStatoRMB(bool boof)
{
	this->bStatoRMB = boof;
}

void MovementBuffer::SetBufferMovimentoMouseX(float valore)
{
	BufferMovimentoMouse.X = valore;
}

void MovementBuffer::SetBufferMovimentoMouseY(float valore)
{
	BufferMovimentoMouse.Y = valore;
}

