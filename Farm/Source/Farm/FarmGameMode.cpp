// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FarmGameMode.h"
#include "FarmCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFarmGameMode::AFarmGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
