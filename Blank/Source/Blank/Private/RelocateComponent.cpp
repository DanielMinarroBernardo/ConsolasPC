// Fill out your copyright notice in the Description page of Project Settings.


#include "RelocateComponent.h"

// Sets default values for this component's properties
URelocateComponent::URelocateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void URelocateComponent::MoveToStart()
{
	_StaticMesh->SetRelativeLocation(InitialLocation);
	_StaticMesh->SetRelativeRotation(InitialRotation);
}

void URelocateComponent::MoveToEnd()
{
	_StaticMesh->SetRelativeLocation(FinalLocation);
	_StaticMesh->SetRelativeRotation(FinalRotation);
}

// Called when the game starts
void URelocateComponent::BeginPlay()
{
	Super::BeginPlay();
	
	_StaticMesh = Cast<UStaticMeshComponent>(GetOwner());
	// ...
	checkf(/*Expresion a evaluar*/_StaticMesh,/*Mensaje en consola*/TEXT("Necesario Componenete StaticMesh"))
	
}


// Called every frame
void URelocateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

