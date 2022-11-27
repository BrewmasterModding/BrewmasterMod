#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMRecipeData.h"
#include "BMAutoRecipeSimulatorWidget.generated.h"

class ABMAutoRecipeSimulator;
class UDataTable;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMAutoRecipeSimulatorWidget : public UUserWidget {
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
    UBMAutoRecipeSimulatorWidget();
    UFUNCTION(BlueprintCallable)
    void SetSimulatedRecipe(FBMRecipeData Recipe);
    
    UFUNCTION(BlueprintCallable)
    ABMAutoRecipeSimulator* GetRecipeSimulator();
    
    UFUNCTION(BlueprintCallable)
    void BeginSimulation();
    
};

