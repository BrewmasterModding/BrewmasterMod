#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMArtDataBeerBottles_Textures.h"
#include "BMArtDataBeerBottles.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMArtDataBeerBottles : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly, SaveGame)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, SaveGame)
    FBMArtDataBeerBottles_Textures Textures;
    
    FBMArtDataBeerBottles();
};

