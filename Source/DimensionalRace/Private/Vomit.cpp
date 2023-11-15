// Fill out your copyright notice in the Description page of Project Settings.


#include "Vomit.h"
#include "Components/BoxComponent.h"
#include "Components/WidgetComponent.h"

// Sets default values
AVomit::AVomit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	Widget = CreateDefaultSubobject<UWidgetComponent>(TEXT("Widget"));
	SetRootComponent(Widget);

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(Widget);

	
}

// Called when the game starts or when spawned
void AVomit::BeginPlay()
{
	Super::BeginPlay();

	
	
}






