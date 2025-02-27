// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"

const float AInteractableDoor::DOOR_TIMER_RATE = 0.01f;
const float AInteractableDoor::DOOR_ROTATION_TOLERANCE = 0.2f;
const float AInteractableDoor::DOOR_APERTURE_SPEED = 5.0f;

// Sets default values
AInteractableDoor::AInteractableDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	SetRootComponent(Root);

	DoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	DoorMesh->SetupAttachment(RootComponent);

	DoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	DoorTrigger->SetupAttachment(RootComponent);
	DoorTrigger->OnComponentBeginOverlap.AddDynamic(this, &AInteractableDoor::OnDoorTriggerOverlap);
}

void AInteractableDoor::OnDoorTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Logica del timer
	MoveDoorTimerDelegate.BindUFunction(this, FName("UpdateMoveDoor"), true);
	GetWorld()->GetTimerManager().SetTimer(MoveDoorTimerHangle_,MoveDoorTimerDelegate,DOOR_TIMER_RATE,true);
}

void AInteractableDoor::OnExitTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Logica del timer
	ExitDoorTimerDelegate.BindUFunction(this, FName("UpdateMoveDoor"), false);
	GetWorld()->GetTimerManager().SetTimer(MoveDoorTimerHangle_, ExitDoorTimerDelegate, DOOR_TIMER_RATE, true);
}

void AInteractableDoor::UpdateMoveDoor(bool ShouldOpen)
{
	const FRotator CurrentRotation = DoorMesh->GetRelativeRotation();

	FRotator TargetRotation;

	if (ShouldOpen == true){
		TargetRotation = TargetRotationOpen;
	}
	else {
		TargetRotation = TargetRotationClose;
	}

	if (CurrentRotation.Equals(TargetRotation,DOOR_ROTATION_TOLERANCE)) {

		OnDoorMove.Broadcast();
		GetWorld()->GetTimerManager().ClearTimer(MoveDoorTimerHangle_);
	}
	else {

		const FRotator UpdateRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, GetWorld()->DeltaRealTimeSeconds,DOOR_APERTURE_SPEED);

		DoorMesh->SetRelativeRotation(UpdateRotation);
	}


	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Entering Here"));
}


// Called when the game starts or when spawned
void AInteractableDoor::BeginPlay()
{
	Super::BeginPlay();
	
	
}

// Called every frame
void AInteractableDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

