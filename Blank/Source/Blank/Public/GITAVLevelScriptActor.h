// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "GITAVLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class BLANK_API AGITAVLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()
	
public:


	/************************************************************************************************/
	UFUNCTION(BlueprintCallable, Category = "Level Streaming")
	void LoadTargetLevel(const FName LevelName, bool bShouldBeLoaded, bool bShoulBeVisible); 
	UFUNCTION(Category = "Level Streaming")
	void OnLevelLoaded();

	/************************************************************************************************/

	UFUNCTION(BlueprintCallable, Category = "Level Streaming")

	void StreamSublevels(TArray<FName> LevelsToLoad, bool bShoulBeVisible);

	UFUNCTION()
	void LoadNextSublevel();

	TArray<FName> SublevelsToLoad;

	bool bShouldBeVisible;
	bool bIsLoadingLevels;
};
