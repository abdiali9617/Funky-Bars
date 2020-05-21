// Copyright Epic Games, Inc. All Rights Reserved.

#include "FunkyBarsPrototypeGameMode.h"
#include "FunkyBarsPrototypeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFunkyBarsPrototypeGameMode::AFunkyBarsPrototypeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
