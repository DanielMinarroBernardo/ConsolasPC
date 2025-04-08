// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncTaskStreamSublevels.generated.h"

/**
 * 
 */
UCLASS()
class BLANK_API UAsyncTaskStreamSublevels : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFROnCompleteLoadDelegate);
	
public:

	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", AutoCreateRefTerm = "SubLevelToLoad"))
	static UAsyncTaskStreamSublevels* StreamSublevel(UObject* WorldContextObject, const FName SubLevelToLoad, bool bVisibleAfterLoad);


	virtual void Activate() override;

	UPROPERTY()
	FName SublevelToLoad;

	UPROPERTY()
	bool bShoulBeVisible;


	UPROPERTY(BlueprintAssignable)
	FFROnCompleteLoadDelegate OnCompletedDelegate;

	UFUNCTION()
	void OnLevelLoaded();

private:

	UPROPERTY()
	UObject* _WorldReference;

	


};
