// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMAutoRecipeSimulator.h"
#include "BMRecipeData.h"
#include "BMAutoRecipeSimulatorWidget.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew)
class BREWMASTERMOD_API UBMAutoRecipeSimulatorWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UDataTable* Equipment_DT;
    
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UDataTable* Recipe_DT;
    
protected:
	UPROPERTY()
	ABMAutoRecipeSimulator* RecipeSimulator;
    
public:
	UFUNCTION(BlueprintCallable)
	void SetSimulatedRecipe(FBMRecipeData Recipe);
    
	UFUNCTION(BlueprintCallable)
	ABMAutoRecipeSimulator* GetRecipeSimulator();
    
	UFUNCTION(BlueprintCallable)
	void BeginSimulation();
};
