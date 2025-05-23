// Copyright Epic Games, Inc. All Rights Reserved.

#include "MMUGameMode.h"
#include "MMUCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMMUGameMode::AMMUGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
