#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "BMRecipeData.h"
#include "BMUserGeneratedRecipeSave.generated.h"

UCLASS()
class BREWMASTERMAIN_API UBMUserGeneratedRecipeSave : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FBMRecipeData SavedRecipeData;
    
    UBMUserGeneratedRecipeSave();
};

