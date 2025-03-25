// Fill out your copyright notice in the Description page of Project Settings.


#include "RespawnComp.h"

// Sets default values for this component's properties
URespawnComp::URespawnComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void URespawnComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
	InitialPos = GetOwner()->GetActorLocation();
	InitialRot = GetOwner()->GetActorRotation();
}


// Called every frame
void URespawnComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...+
	CheckDeadZone(killZ);
}

void URespawnComp::CheckDeadZone(float deadHeight)
{
	FVector position = GetOwner()->GetActorLocation();

	if (position.Z <= deadHeight) {
		Respawn();		
	}
}

void URespawnComp::Respawn()
{
	//GetOwner()->TeleportTo({ InitialPos.X,InitialPos.Y,InitialPos.Z + 50 }, { 0,0,0 }, false, false);
	GetOwner()->SetActorLocation({InitialPos.X,InitialPos.Y,InitialPos.Z + 0});
	GetOwner()->SetActorRotation(InitialRot);
	
	//Reiniciar Velocidad
	UPrimitiveComponent* RootPrim = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	if (RootPrim && RootPrim->IsSimulatingPhysics()) {
		RootPrim->SetPhysicsLinearVelocity(FVector::ZeroVector);
		RootPrim->SetPhysicsAngularVelocityInDegrees(FVector::ZeroVector);
	}
}

