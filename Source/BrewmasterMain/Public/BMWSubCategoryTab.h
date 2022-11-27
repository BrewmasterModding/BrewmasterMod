#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "Styling/SlateBrush.h"
#include "BMWSubCategoryTab.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWSubCategoryTab : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMWSubCategoryTab();
    UFUNCTION(BlueprintImplementableEvent)
    void SetSubCategoryTabIcon(FSlateBrush Icon);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetIsChecked(bool IsChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool GetIsChecked();
    
    UFUNCTION(BlueprintCallable)
    void BroadcastSelectedCategory();
    
};

