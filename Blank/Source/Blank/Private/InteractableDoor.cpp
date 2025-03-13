// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableDoor.h"

const float AInteractableDoor::DOOR_TIMER_RATE = 0.01f;
const float AInteractableDoor::DOOR_ROTATION_TOLERANCE = 1.0f;
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

	BooTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BooTrigger"));
	BooTrigger->SetupAttachment(RootComponent);
	BooTrigger->OnComponentBeginOverlap.AddDynamic(this, &AInteractableDoor::OnDoorTriggerOverlap);
}

void AInteractableDoor::OnDoorTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//OpenDoor();
	
	//Use of actor component
	/*if (myRelocateComponent) {
		myRelocateComponent->MoveToEnd();
	}*/

	//Use of scene component 
	
}

void AInteractableDoor::OnBooTriggerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//CloseDoor();

	//Use of actor component
	/*if (myRelocateComponent) {
		myRelocateComponent->MoveToStart();
	}
	*/

	//Use of scene component 


}

void AInteractableDoor::UpdateMoveDoor(bool ShouldOpen)
{
	const FRotator CurrentRotation = DoorMesh->GetRelativeRotation();
	FRotator TargetRotation;

	ShouldOpen ? TargetRotation = TargetRotationOpen : TargetRotationClose;
	
	if (CurrentRotation.Equals(TargetRotation, DOOR_ROTATION_TOLERANCE)) {
		GetWorld()->GetTimerManager().ClearTimer(OpenDoorTimerHandle);
		OnDoorMove.Broadcast(ShouldOpen);
	}
	else {
		const FRotator UpdateRotation = FMath::RInterpTo(CurrentRotation, TargetRotation, GetWorld()->DeltaRealTimeSeconds, DOOR_APERTURE_SPEED);
		DoorMesh->SetRelativeRotation(FRotator(UpdateRotation));
	}
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Entering Here"));
}

void AInteractableDoor::OpenDoor()
{
	//Logica del timer
	FTimerDelegate OpenDoorDelegate;
	OpenDoorDelegate.BindUFunction(this, FName("UpdateMoveDoor"), true);
	GetWorld()->GetTimerManager().SetTimer(OpenDoorTimerHandle, OpenDoorDelegate, DOOR_TIMER_RATE, true);
}

void AInteractableDoor::CloseDoor()
{

	//Logica del timer
	FTimerDelegate CloseDoorDelegate;
	CloseDoorDelegate.BindUFunction(this, FName("UpdateMoveDoor"), false);
	GetWorld()->GetTimerManager().SetTimer(OpenDoorTimerHandle, CloseDoorDelegate, DOOR_TIMER_RATE, true);
}

void AInteractableDoor::Interact_Implementation(EInteractionType InteractionType)
{
	switch (InteractionType)
	{
	case EInteractionType::Open:
		OpenDoor();
		break;
	case EInteractionType::Close:
		CloseDoor();
		break;
	}
}


// Called when the game starts or when spawned
void AInteractableDoor::BeginPlay()
{
	Super::BeginPlay();
	
	//myRelocateComponent = GetComponentByClass<URelocateComponent>();

	myRelocateSceneComponent = GetComponentByClass<URelocateSceneComponent>();
	
}

// Called every frame
void AInteractableDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

