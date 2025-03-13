// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RelocateSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLANK_API URelocateSceneComponent : public USceneComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	URelocateSceneComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RelocateCmp")
	FRotator InitialRotation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RelocateCmp")
	FRotator FinalRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RelocateCmp")
	FVector InitialLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RelocateCmp")
	FVector FinalLocation;

	UFUNCTION(BlueprintCallable, Category = "RelocateCmp")
	void MoveToStart();

	UFUNCTION(BlueprintCallable, Category = "RelocateCmp")
	void MoveToEnd();


	UStaticMeshComponent* _StaticMesh;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
