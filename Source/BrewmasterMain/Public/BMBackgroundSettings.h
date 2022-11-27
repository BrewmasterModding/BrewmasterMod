#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "BMBackgroundSettings.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMBackgroundSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* BackgroundMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform BackgroundTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingsName;
    
    FBMBackgroundSettings();
};

