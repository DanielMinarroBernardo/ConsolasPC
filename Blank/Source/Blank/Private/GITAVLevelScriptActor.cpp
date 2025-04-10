// Fill out your copyright notice in the Description page of Project Settings.


#include "GITAVLevelScriptActor.h"
#include <Kismet/GameplayStatics.h>

/****************************SOLO*UN*NIVEL***********************************************************/
void AGITAVLevelScriptActor::LoadTargetLevel(const FName LevelName, bool bShouldBeLoaded, bool bShoulBeVisible)
{
	FLatentActionInfo info;
	info.CallbackTarget = this;
	info.ExecutionFunction = "OnLevelLoaded";
	info.Linkage = 0;
	info.UUID = 123;

	UGameplayStatics::LoadStreamLevel(this, LevelName, bShoulBeVisible, true, info);
}

void AGITAVLevelScriptActor::OnLevelLoaded()
{
	UE_LOG(LogTemp, Warning, TEXT("LEVEL FINISHED LOADING"));
	GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Cyan, TEXT("LEVEL FINISHED LOADING"));		
}
/****************************SOLO*UN*NIVEL***********************************************************/
/****************************MAS*DE*UN*NIVEL***********************************************************/
void AGITAVLevelScriptActor::StreamSublevels(TArray<FName> LevelsToLoad, bool bShoulBeVisible)
{
	if (bIsLoadingLevels == false) {
		SublevelsToLoad.Empty();
		SublevelsToLoad.Append(LevelsToLoad);
		bShouldBeVisible = bShoulBeVisible;
		LoadNextSublevel();//Load first sublevel
		bIsLoadingLevels = true;
	}

}

void AGITAVLevelScriptActor::LoadNextSublevel()
{
	if (SublevelsToLoad.Num() > 0) {
		FLatentActionInfo info;
		info.CallbackTarget = this;
		info.ExecutionFunction = "LoadNextSublevel";
		info.Linkage = 0;
		info.UUID = 123;

		UGameplayStatics::LoadStreamLevel(this, SublevelsToLoad.Pop(), bShouldBeVisible, true, info);

	}
	else {
		bIsLoadingLevels = false;
	}
}



