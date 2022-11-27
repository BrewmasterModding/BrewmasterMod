#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMSafeZoneScale.generated.h"

class USafeZoneSlot;
class UScaleBox;
class USafeZone;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSafeZoneScale : public UUserWidget {
    GENERATED_BODY()
public:
    UBMSafeZoneScale();
    UFUNCTION(BlueprintImplementableEvent)
    UScaleBox* GetSlotBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    USafeZoneSlot* GetSafeZoneBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    USafeZone* GetSafeZone();
    
    UFUNCTION()
    void ApplySafeZone();
    
};

