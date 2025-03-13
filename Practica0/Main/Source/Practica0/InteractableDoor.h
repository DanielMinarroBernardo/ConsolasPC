// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "InteractableDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDoorClosed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoorMoved, bool, bOpened);

UCLASS()
class PRACTICA0_API AInteractableDoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableDoor();

	/* DELEGATES */
	UPROPERTY(BlueprintAssignable, Category = "InteractableDoor")
	FOnDoorClosed OnDoorClosed;

	UPROPERTY(BlueprintAssignable, Category = "InteractableDoor")
	FOnDoorMoved OnDoorMoved;

	/*CONSTANTS*/
	static const float DOOR_TIMER_RATE;
	static const float DOOR_ROT_TOLERANCE;
	static const float DOOR_ROT_DELTA;

	UPROPERTY(BlueprintReadOnly, VisibleDefaultsOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* Root;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	UBoxComponent* BoxCollisionExit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	FRotator TargetRotationDoorOpened = FRotator(0.0f, 0.0f, -90.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	FRotator TargetRotationDoorClosed = FRotator(0.0f, 0.0f, 0.0f);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	void OnDoorBeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	void OnDoorExitBeginOverlap(UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult);


private: 
	FTimerHandle MoveDoorTimeHandle_;

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = "true"))
	void UpdateMoveDoor(bool bShouldOpen);
};
