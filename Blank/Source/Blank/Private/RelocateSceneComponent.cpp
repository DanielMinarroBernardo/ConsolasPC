// Fill out your copyright notice in the Description page of Project Settings.


#include "RelocateSceneComponent.h"

// Sets default values for this component's properties
URelocateSceneComponent::URelocateSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	_State = ERelocationState::StartState;
}


void URelocateSceneComponent::MoveToStart()
{

	_State = ERelocationState::MovingToStart;	
}

void URelocateSceneComponent::MoveToEnd()
{
	_State = ERelocationState::MovingToEnd;
}

void URelocateSceneComponent::TeleportToStart()
{
	if (_StaticMesh) {
		_StaticMesh->SetRelativeLocation(InitialLocation);
		_StaticMesh->SetRelativeRotation(InitialRotation);
		
		_State = ERelocationState::StartState;


	}
		
}

void URelocateSceneComponent::TeleportToEnd()
{
	if (_StaticMesh) {
		_StaticMesh->SetRelativeRotation(FinalRotation);
		_StaticMesh->SetRelativeLocation(FinalLocation);
		
		_State = ERelocationState::EndState;

	}
}

void URelocateSceneComponent::GoToNextState()
{
	switch (_State)
	{
	case ERelocationState::StartState:
		SetState(ERelocationState::MovingToEnd);
		break;
	case ERelocationState::EndState:
		SetState(ERelocationState::MovingToStart);
		break;
	case ERelocationState::MovingToStart:
		SetState(ERelocationState::StartState);
		break;
	case ERelocationState::MovingToEnd:
		SetState(ERelocationState::EndState);
		break;
	default:
		break;
	}
}

void URelocateSceneComponent::SetState(ERelocationState NewState)
{
	if (NewState == _State) return;



}

// Called when the game starts
void URelocateSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	_StaticMesh = Cast<UStaticMeshComponent>(GetAttachParent());
	// ...
	
	if (bMustBeginOnEndState) {
		_State = ERelocationState::EndState;
		TeleportToEnd();
	}
	else {
		TeleportToStart();
	}

}


// Called every frame
void URelocateSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

