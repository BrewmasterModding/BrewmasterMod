#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFlavourCategory.h"
#include "EFlavourNotes.h"
#include "BMFlavourData.h"
#include "BMHopsIngredientData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMHopsIngredientData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName IngredientName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    float AlphaAcidContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName OriginCountry;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TMap<EFlavourCategory, float> UtilizationFlavorInfluence;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    TMap<EFlavourNotes, float> UtilizationFlavorNotesInfluence;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FBMFlavourData HopsDegradableFlavour;
    
    FBMHopsIngredientData();
};

