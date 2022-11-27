#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMWItemCategoryContainer.generated.h"

class UPanelWidget;
class UWrapBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMWItemCategoryContainer : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxColumns;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool IsShop;
    
    UBMWItemCategoryContainer();
    UFUNCTION(BlueprintImplementableEvent)
    void SetItemSectionText(const FText& Text);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckMark(bool SetChecked);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCheckBoxVisibility(ESlateVisibility CheckboxVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    UWrapBox* GetStorageItemList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetShoppingItemList();
    
};

