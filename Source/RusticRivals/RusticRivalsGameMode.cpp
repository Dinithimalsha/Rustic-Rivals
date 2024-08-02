// Copyright Epic Games, Inc. All Rights Reserved.

#include "RusticRivalsGameMode.h"
#include "RusticRivalsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARusticRivalsGameMode::ARusticRivalsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
