// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "BMAutoBrewSimResults.h"
#include "BMAutoBrewSimParams.h"
#include "BMAutoBrewSimCalibrations.h"
#include "BMDynamicContainer.h"
#include "BMAutoBrewSim.generated.h"

/**
 * 
 */
UCLASS()
class BREWMASTERMOD_API ABMAutoBrewSim : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TArray<FBMAutoBrewSimResults> AllCalibrationResults;
    
private:
	UPROPERTY()
	TMap<FName, ABMDynamicContainer*> Name2Container;
    
public:
	UFUNCTION(BlueprintCallable)
	void StartCalibration(TArray<FBMAutoBrewSimParams> CalibrationTests, FBMAutoBrewSimCalibrations Options);
    
private:
	UFUNCTION()
	void CheckIfTestEnded();
};
