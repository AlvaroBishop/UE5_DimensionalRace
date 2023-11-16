// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Vomit.generated.h"

UCLASS()
class DIMENSIONALRACE_API AVomit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVomit();

	UFUNCTION()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	class UWidgetComponent* Widget;

	UPROPERTY(VisibleAnywhere)
	class UBoxComponent* BoxCollider;

	
	



};
