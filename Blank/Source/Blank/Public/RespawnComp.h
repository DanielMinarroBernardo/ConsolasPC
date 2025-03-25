// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RespawnComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLANK_API URespawnComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URespawnComp();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn")
	float killZ= -500;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn")
	FVector InitialPos;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn")
	FRotator InitialRot;
	UFUNCTION(BlueprintCallable, Category = "Respawn")
	void Respawn();


protected:
	// Called when the game starts
	virtual void BeginPlay() override;



public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void CheckDeadZone(float deadHeight);
	
		
};
