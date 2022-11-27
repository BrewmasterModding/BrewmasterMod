#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EBMEquipmentCategory.h"
#include "Engine/DataTable.h"
#include "EBMIngredientSubCategory.h"
#include "EFlavourNotes.h"
#include "EBMRecipeDifficulty.h"
#include "EFlavourCategory.h"
#include "EIngredientType.h"
#include "EBMIngredientCategory.h"
#include "EBMEquipmentSubCategory.h"
#include "ESizeBand.h"
#include "EBMBeerCategory.h"
#include "EBMSponsor.h"
#include "EBMReputation.h"
#include "EBMMastery.h"
#include "EBMFurnitureCategory.h"
#include "EBMFurnitureSubcategory.h"
#include "BMConditionsDataTypes.generated.h"

class UUserWidget;
class ABMBaseActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMConditionsDataTypes : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    FName StatName;
    
    UPROPERTY(EditAnywhere, SaveGame)
    float StatValue;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EFlavourNotes FlavourNote;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EFlavourCategory FlavourCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMIngredientCategory IngredientCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMIngredientSubCategory IngredientSubCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EIngredientType IngredientType;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMEquipmentCategory EquipmentCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMEquipmentSubCategory EquipmentSubCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    ESizeBand Size;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMBeerCategory BeerCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMRecipeDifficulty Difficulty;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMSponsor SponsorBrewery;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMReputation BreweryReputation;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMMastery MasteryLevel;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<ABMBaseActor> ItemClass;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TSubclassOf<UUserWidget> UIScreenClass;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMFurnitureCategory FurnitureCategory;
    
    UPROPERTY(EditAnywhere, SaveGame)
    EBMFurnitureSubcategory FurnitureSubCategory;
    
    FBMConditionsDataTypes();
};

