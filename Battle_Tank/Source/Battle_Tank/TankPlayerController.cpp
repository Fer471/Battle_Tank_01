// Fill out your copyright notice in the Description page of Project Settings.

#include "Battle_Tank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not posessing a Tank"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("TankPlayerController posessing %s"), *(ControlledTank->GetName()))
	}
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}



