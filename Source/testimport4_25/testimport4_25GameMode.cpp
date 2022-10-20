// Copyright Epic Games, Inc. All Rights Reserved.

#include "testimport4_25GameMode.h"
#include "testimport4_25Character.h"
#include "UObject/ConstructorHelpers.h"

Atestimport4_25GameMode::Atestimport4_25GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
