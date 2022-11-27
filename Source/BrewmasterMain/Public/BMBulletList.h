#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMBulletList.generated.h"

class UBMBulletTextItem;
class UPanelWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMBulletList : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UBMBulletTextItem> BulletItemClass;
    
    UBMBulletList();
    UFUNCTION(BlueprintImplementableEvent)
    void SetBulletTitle(const FText& Text, ESlateVisibility WidgetVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    UPanelWidget* GetBulletPointsHolder();
    
};

