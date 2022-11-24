// Fill out your copyright notice in the Description page of Project Settings.


#include "BMInteractionComponent.h"

// Sets default values for this component's properties
UBMInteractionComponent::UBMInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBMInteractionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBMInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBMInteractionComponent::SetRadius(float value)
{
}

EBMInteractionType UBMInteractionComponent::GetInteractionType()
{
	return EBMInteractionType();
}

void UBMInteractionComponent::GetFocusView(FVector& CameraForwards, FRotator& CameraRotation, FBoxSphereBounds& RequiredInView, TArray<AActor*>& FocusObjects)
{
}

