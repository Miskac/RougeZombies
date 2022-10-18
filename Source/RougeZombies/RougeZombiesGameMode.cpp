// Copyright Epic Games, Inc. All Rights Reserved.

#include "RougeZombiesGameMode.h"
#include "RougeZombiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARougeZombiesGameMode::ARougeZombiesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
