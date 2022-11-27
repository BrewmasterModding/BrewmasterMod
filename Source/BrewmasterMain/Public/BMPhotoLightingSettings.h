#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataTable.h"
#include "BMPhotoSceneLightProperties.h"
#include "UObject/NoExportTypes.h"
#include "BMPhotoLightingSettings.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMPhotoLightingSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FTransform> LightTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSubclassOf<AActor>> LightClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FBMPhotoSceneLightProperties> LightComponentProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingsName;
    
    FBMPhotoLightingSettings();
};

