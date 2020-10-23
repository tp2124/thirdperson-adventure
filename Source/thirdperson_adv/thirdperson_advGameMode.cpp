// Copyright Epic Games, Inc. All Rights Reserved.

#include "thirdperson_advGameMode.h"
#include "thirdperson_advCharacter.h"
#include "UObject/ConstructorHelpers.h"

Athirdperson_advGameMode::Athirdperson_advGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
