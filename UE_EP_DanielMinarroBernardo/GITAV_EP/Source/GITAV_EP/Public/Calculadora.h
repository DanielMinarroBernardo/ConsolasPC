// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Calculadora.generated.h"

UCLASS()
class GITAV_EP_API ACalculadora : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACalculadora();

	/*UPROPERTY()
	int password;

	UPROPERTY(Category = "Setup",EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* key;
	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	UBoxComponent* DoorTrigger;*/





protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
