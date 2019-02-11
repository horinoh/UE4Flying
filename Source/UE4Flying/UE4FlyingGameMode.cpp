// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4FlyingGameMode.h"
#include "UE4FlyingPawn.h"

AUE4FlyingGameMode::AUE4FlyingGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AUE4FlyingPawn::StaticClass();
}
