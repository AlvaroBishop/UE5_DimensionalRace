// Fill out your copyright notice in the Description page of Project Settings.


#include "BishopObstacle.h"

#include "Net/UnrealNetwork.h"

// Sets default values
ABishopObstacle::ABishopObstacle()
{
	bReplicates = true;
	AActor::SetReplicateMovement(true);
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstacleMeshComponent"));
	RootComponent = ObstacleMesh;
}

// Called when the game starts or when spawned
void ABishopObstacle::BeginPlay()
{
	Super::BeginPlay();
	
}
float ABishopObstacle::TransformedSin(float RT)
{
	return Amplitude * FMath::Sin(RT * TimeConstant);
}

void ABishopObstacle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Here we list the variables we want to replicate
	DOREPLIFETIME(ABishopObstacle, RunningTime);
}
// Called every frame
void ABishopObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	RunningTime += DeltaTime;

}

