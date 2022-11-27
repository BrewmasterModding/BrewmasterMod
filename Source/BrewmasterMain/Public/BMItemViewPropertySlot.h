#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "EBMXrayInformationSelectedState.h"
#include "Styling/SlateBrush.h"
#include "Layout/Margin.h"
#include "BMItemViewPropertySlot.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMItemViewPropertySlot : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMItemViewPropertySlot();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetState(EBMXrayInformationSelectedState State);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSlotImage(const FSlateBrush ItemBrush);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FMargin GetItemPropertyMargin();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Delete();
    
};

