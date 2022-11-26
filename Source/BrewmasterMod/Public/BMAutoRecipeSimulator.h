#pragma once
#include "CoreMinimal.h"
#include "BMAutoBrewSim.h"
#include "BMSimulationControl.h"
#include "BMDynamicContainer.h"
#include "BMBeerProperties.h"
#include "BMRecipeInstruction.h"
#include "BMAutoRecipeSimulator.generated.h"

UCLASS(BlueprintType)
class BREWMASTERMOD_API ABMAutoRecipeSimulator : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	bool bIsSimulating;
    
	UPROPERTY(BlueprintReadOnly)
	int32 CurrentAutoInstructionIndex;
    
	UPROPERTY(BlueprintReadOnly)
	TArray<FBMAutoRecipeInstruction> AutoInstructions;
    
protected:
	UPROPERTY()
	ABMAutoBrewSim* AutoBrewSim;
    
	UPROPERTY()
	ABMSimulationControl* SimController;
    
	UPROPERTY()
	ABMDynamicContainer* DefaultContainer;
    
	UPROPERTY()
	UDataTable* Equipment_DT;
    
	UPROPERTY()
	UDataTable* Recipe_DT;
    
	UPROPERTY()
	float MinimumInstructionInterval;
    
	UPROPERTY()
	float HoursPerSecondMultiplier;
    
	UPROPERTY()
	float ContainerLiquidVolume;
    
public:
	UFUNCTION(BlueprintCallable)
	void SetMinimumInterval(float Interval);
    
	UFUNCTION(BlueprintCallable)
	void SetHoursPerSecondMultiplier(float Multiplier);
    
	UFUNCTION(BlueprintCallable)
	void SaveCurrentBeerStatsToRecipe();
    
	UFUNCTION(BlueprintCallable)
	FBMBeerProperties GetSimulatedBeerProperties();
    
	UFUNCTION(BlueprintCallable)
	bool GetIsSimulationComplete();
    
	UFUNCTION(BlueprintCallable)
	FBMRecipeInstruction GetCurrentRecipeInstruction();
    
	UFUNCTION(BlueprintCallable)
	float GetContainerLiquidVolume();
};
