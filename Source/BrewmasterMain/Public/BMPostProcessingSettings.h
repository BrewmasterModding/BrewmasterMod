#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Scene.h"
#include "UObject/NoExportTypes.h"
#include "BMHDRIProperties.h"
#include "BMPostProcessingSettings.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPostProcessingSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform HDRITransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMHDRIProperties HDRIProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingsName;
    
    FBMPostProcessingSettings();
};

