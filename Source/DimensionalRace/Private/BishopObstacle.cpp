// Fill out your copyright notice in the Description page of Project Settings.


#include "BishopObstacle.h"

// Sets default values
ABishopObstacle::ABishopObstacle()
{
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

// Called every frame
void ABishopObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	RunningTime += DeltaTime;

	AddActorWorldOffset(FVector(0.f, (Amplitude * FMath::Sin(RunningTime * TimeConstant)),0.f));

}

