#pragma once
#include "CoreMinimal.h"
#include "CineCameraComponent.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "CineCameraActor.h"
#include "CineCameraComponent.h"
#include "CineCameraComponent.h"
#include "BMCameraSettings.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMCameraSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTransform CameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLookatTrackingSettings LookatTrackingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFilmbackSettings FilmbackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraLensSettings LensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FCameraFocusSettings FocusSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Apeture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ConstraintAspectRatio;
    
    FBMCameraSettings();
};

