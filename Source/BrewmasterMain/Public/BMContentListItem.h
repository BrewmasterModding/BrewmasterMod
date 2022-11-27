#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMContentListItem.generated.h"

class UBMButton;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMContentListItem : public UBMUserWidget {
    GENERATED_BODY()
public:
    UBMContentListItem();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetPageNumber(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeywordDescription(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetKeyword(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBlurb(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMButton* GetButton();
    
};

