#pragma once
#include "CoreMinimal.h"
#include "BMLabelTextureAsset.h"
#include "Engine/DataTable.h"
#include "EBMLabelTextSlot.h"
#include "BMLabelTextData.h"
#include "UObject/NoExportTypes.h"
#include "BMLabelDesign.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelDesign : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FName PresetBaseID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TSoftObjectPtr<UMaterialInstance> BaseMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<EBMLabelTextSlot, FBMLabelTextData> TextParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FLinearColor> ColourParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, float> FloatParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    TMap<FName, FBMLabelTextureAsset> TextureParams;
    
    FBMLabelDesign();
};

