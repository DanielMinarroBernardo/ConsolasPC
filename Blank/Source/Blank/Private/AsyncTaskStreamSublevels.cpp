// Fill out your copyright notice in the Description page of Project Settings.


#include "AsyncTaskStreamSublevels.h"
#include <Kismet/GameplayStatics.h>



UAsyncTaskStreamSublevels* UAsyncTaskStreamSublevels::StreamSublevel(UObject* WorldContextObject, const FName SubLevelToLoad, bool bVisibleAfterLoad)
{
    UAsyncTaskStreamSublevels* StreamSublevels = NewObject<UAsyncTaskStreamSublevels>();

    StreamSublevels->_WorldReference = WorldContextObject;
    StreamSublevels->SublevelToLoad = SubLevelToLoad;
    StreamSublevels->bShoulBeVisible = bVisibleAfterLoad;

    return StreamSublevels;
}

void UAsyncTaskStreamSublevels::Activate()
{
    UWorld* World = GEngine->GetWorldFromContextObjectChecked(_WorldReference);

    FLatentActionInfo info;
    info.CallbackTarget = this;
    info.ExecutionFunction = "OnLevelLoaded";
    info.Linkage = 0;
    info.UUID = 123;

    UGameplayStatics::LoadStreamLevel(World, SublevelToLoad, bShoulBeVisible, false, info);
}

void UAsyncTaskStreamSublevels::OnLevelLoaded()
{
    OnCompletedDelegate.Broadcast();

}