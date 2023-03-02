// Copyright Epic Games, Inc. All Rights Reserved.

#include "SolarSaviorGameMode.h"
#include "SolarSaviorCharacter.h"

ASolarSaviorGameMode::ASolarSaviorGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ASolarSaviorCharacter::StaticClass();	
}
