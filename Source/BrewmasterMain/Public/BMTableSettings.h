#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMTableSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTableSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* TableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingsName;
    
    FBMTableSettings();
};

