#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMRecipeStat.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMRecipeStat : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMRecipeStat();
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatValueText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetStatTitleText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetDashText(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCriticalIcon(bool ShowIcon);
    
};

