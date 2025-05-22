// Copyright Epic Games, Inc. All Rights Reserved.

#include "GITAV_EPGameMode.h"
#include "GITAV_EPPlayerController.h"
#include "GITAV_EPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGITAV_EPGameMode::AGITAV_EPGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AGITAV_EPPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	// set default controller to our Blueprinted controller
	static ConstructorHelpers::FClassFinder<APlayerController> PlayerControllerBPClass(TEXT("/Game/TopDown/Blueprints/BP_TopDownPlayerController"));
	if(PlayerControllerBPClass.Class != NULL)
	{
		PlayerControllerClass = PlayerControllerBPClass.Class;
	}
}