#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMContentList.generated.h"

class UBMContentListItem;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMContentList : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMContentListItem> ContentListItemClass;
    
    UBMContentList();
    UFUNCTION(BlueprintImplementableEvent)
    void SetTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetLetterKeyword(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetContentListHolder();
    
};

