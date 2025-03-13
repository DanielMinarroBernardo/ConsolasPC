// Fill out your copyright notice in the Description page of Project Settings.


#include "RelocateSceneComponent.h"

// Sets default values for this component's properties
URelocateSceneComponent::URelocateSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void URelocateSceneComponent::MoveToStart()
{
	if (_StaticMesh) {
		_StaticMesh->SetRelativeLocation(InitialLocation);
		_StaticMesh->SetRelativeRotation(InitialRotation);

	}
}

void URelocateSceneComponent::MoveToEnd()
{
	if (_StaticMesh) {
		_StaticMesh->SetRelativeRotation(FinalRotation);
		_StaticMesh->SetRelativeLocation(FinalLocation);

	}
}

// Called when the game starts
void URelocateSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	_StaticMesh = Cast<UStaticMeshComponent>(GetAttachParent());
	
}


// Called every frame
void URelocateSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

