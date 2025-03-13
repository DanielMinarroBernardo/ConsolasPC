// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"

const float AInteractableDoor::DOOR_TIMER_RATE = 0.01f;
const float AInteractableDoor::DOOR_ROT_TOLERANCE = 0.2f;
const float AInteractableDoor::DOOR_ROT_DELTA = 5.0f;

// Sets default values
AInteractableDoor::AInteractableDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = Root = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	StaticMesh->SetupAttachment(GetRootComponent());

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	BoxCollision->SetupAttachment(GetRootComponent());
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AInteractableDoor::OnDoorBeginOverlap);

	BoxCollisionExit = CreateDefaultSubobject<UBoxComponent>(TEXT("ExitCollider"));
	BoxCollisionExit->SetupAttachment(GetRootComponent());
	BoxCollisionExit->OnComponentBeginOverlap.AddDynamic(this, &AInteractableDoor::OnDoorExitBeginOverlap);

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

void AInteractableDoor::OnDoorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FTimerDelegate TimerDelegate;
	TimerDelegate.BindUObject(this, &AInteractableDoor::UpdateMoveDoor, true); //true = should open door
	GetWorld()->GetTimerManager().SetTimer(MoveDoorTimeHandle_, TimerDelegate, AInteractableDoor::DOOR_TIMER_RATE, true);
}

void AInteractableDoor::OnDoorExitBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FTimerDelegate TimerDelegate;

	//Usando BindUFunction:
	//TimerDelegate.BindUFunction(this, FName("UpdateMoveDoor"), false);

	//Usando BindUObject
	TimerDelegate.BindUObject(this, &AInteractableDoor::UpdateMoveDoor, false); //false = should close door
	GetWorld()->GetTimerManager().SetTimer(MoveDoorTimeHandle_, TimerDelegate, AInteractableDoor::DOOR_TIMER_RATE, true);
}

void AInteractableDoor::UpdateMoveDoor(bool bShouldOpen)
{
	const FRotator CurrentRotation = StaticMesh->GetRelativeRotation();
	FRotator TargetRotation;

	bShouldOpen ? TargetRotation = TargetRotationDoorOpened : TargetRotationDoorClosed;

	if (CurrentRotation.Equals(TargetRotation, DOOR_ROT_TOLERANCE))
	{
		GetWorld()->GetTimerManager().ClearTimer(MoveDoorTimeHandle_);
		OnDoorMoved.Broadcast(bShouldOpen);
	}
	else
	{
		const FRotator UpdatedRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, GetWorld()->DeltaTimeSeconds, DOOR_ROT_DELTA);
		StaticMesh->SetRelativeRotation(UpdatedRotation);
	}
}
