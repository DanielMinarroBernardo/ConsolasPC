// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RelocateSceneComponent.generated.h"


UENUM(BlueprintType)
enum class ERelocationState : uint8 {
	StartState, EndState, MovingToStart , MovingToEnd
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BLANK_API URelocateSceneComponent : public USceneComponent
{
	GENERATED_BODY()


public:	
	// Sets default values for this component's properties
	URelocateSceneComponent();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	bool bMustBeginOnEndState;

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


	UFUNCTION(BlueprintCallable, Category = "RelocateCmp")
	void TeleportToStart();

	UFUNCTION(BlueprintCallable, Category = "RelocateCmp")
	void TeleportToEnd();

	UFUNCTION(BlueprintCallable, Category = "RelocateCmp")
	void GoToNextState();

	UFUNCTION(BlueprintCallable, Category = "RelocateCmp")
	void SetState(ERelocationState NewState);

	UStaticMeshComponent* _StaticMesh;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
private:
	ERelocationState _State;
};
