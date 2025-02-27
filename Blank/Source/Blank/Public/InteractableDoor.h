// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "InteractableDoor.generated.h"

//Espacio para meter los delegates
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorMove);

UCLASS()
class BLANK_API AInteractableDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableDoor();

	//DELEGATES

	UPROPERTY(BlueprintAssignable, Category = "Delegates")
	FOnDoorMove OnDoorMove;



	//CONSTANTES

	static const float DOOR_TIMER_RATE;
	static const float DOOR_ROTATION_TOLERANCE;
	static const float DOOR_APERTURE_SPEED;

	// PROPERTIES //
	
	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	FRotator TargetRotationOpen = FRotator(0.0, -90.0, 0.0);
	
	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	FRotator TargetRotationClose = FRotator(0.0, 0.0, 0.0);

	//COMPONENTES//
	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	USceneComponent* Root;

	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* DoorMesh;

	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	UBoxComponent* DoorTrigger;

	UPROPERTY(Category = "Setup", EditAnywhere, BlueprintReadWrite)
	UBoxComponent* CloseDoorTrigger;



	
	//FUNCTION
	UFUNCTION()
	void OnDoorTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	//FUNCTION
	UFUNCTION()
	void OnExitTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


	UFUNCTION(BlueprintCallable)
	void UpdateMoveDoor(bool ShouldOpen);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FTimerHandle MoveDoorTimerHangle_; 
	FTimerDelegate MoveDoorTimerDelegate;
	FTimerDelegate ExitDoorTimerDelegate;

};
