// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMAutoBrewSimCalibrations.h"
#include "BMAutoBrewSimParams.h"
#include "BMAutoBrewSim.h"
#include "BMAutoBrewSimDebugWidget.generated.h"

/**
 * 
 */
UCLASS()
class BREWMASTERMOD_API UBMAutoBrewSimDebugWidget : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<FBMAutoBrewSimParams> CalibrationTests;
    
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	FBMAutoBrewSimCalibrations Options;
    
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	ABMAutoBrewSim* AutoBrewSim;
    
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool bSetupDone;
	
	UFUNCTION()
	void UpdateDataFromBrewsim();
    
	UFUNCTION(BlueprintCallable)
	void SetupBrewSimDebugWidget();
    
	UFUNCTION(BlueprintCallable)
	void SetTimeAcceleration(bool IsActive, float TimeSpeed);
    
	UFUNCTION(BlueprintCallable)
	void ResetFixedData();
    
	UFUNCTION(BlueprintCallable)
	void ResetDebuging();
    
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void RefreshDataDisplay();
    
	UFUNCTION(BlueprintCallable)
	void CreateAutoBrewSim();
};
