// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BishopObstacle.generated.h"

UCLASS()
class DIMENSIONALRACE_API ABishopObstacle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABishopObstacle();
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category="Period Parameters")
	float Amplitude = 0.25f;

	UPROPERTY(EditAnywhere, Category="Period Parameters")
	float TimeConstant = 5.f;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float RunningTime;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* ObstacleMesh;

	


};
