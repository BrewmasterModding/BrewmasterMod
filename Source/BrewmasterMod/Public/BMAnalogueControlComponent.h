// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBMAnalogueControlType.h"
#include "BMAnalogueControlData.h"
#include "BMAnalogueControlComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BREWMASTERMOD_API UBMAnalogueControlComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBMAnalogueControlComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TMap<EBMAnalogueControlType, FBMAnalogueControlData> DataMap;
	UFUNCTION(BlueprintCallable)
	void StopAnalogueControlAnimation(EBMAnalogueControlType ControlType)
	{
	}

	UFUNCTION(BlueprintCallable)
	void StartAnalogueControlAnimation(float TargetValue, bool UsingVariableSpeed, EBMAnalogueControlType ControlType)
	{
	}

	UFUNCTION(BlueprintCallable)
	void SingleAnalogueControlAnimationStep(float TargetValue, bool UsingVariableSpeed, float DeltaTime,
	                                        EBMAnalogueControlType ControlType)
	{
	}

	UFUNCTION(BlueprintCallable)
	void SetAnimationProgressValue(float NewAnimationProgressValue, EBMAnalogueControlType ControlType)
	{
	}

	UFUNCTION(BlueprintCallable)
	float GetAnimationProgressValue(EBMAnalogueControlType ControlType)
	{
		return 0.0;
	}
};
