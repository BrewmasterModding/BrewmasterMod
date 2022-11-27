#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMTooltipData.h"
#include "BMUserWidget.generated.h"

class UPanelWidget;
class UBMTooltipWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UBMUserWidget();
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetPopUpAttachPanel();
    
    UFUNCTION(BlueprintCallable)
    UBMTooltipWidget* CreateTooltipWidget(FBMTooltipData TooltipData);
    
};

