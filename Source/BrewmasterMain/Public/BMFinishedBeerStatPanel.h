#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BMPackagedBeerData.h"
#include "BMUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "BMFinishedBeerStatPanel.generated.h"

class UBMWFlavorList;
class UBMFinishedBeerStatSlot;
class UVerticalBox;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMFinishedBeerStatPanel : public UBMUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    bool bPanelOpen;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UBMFinishedBeerStatSlot> StatSlotClass;
    
public:
    UBMFinishedBeerStatPanel();
    UFUNCTION(BlueprintCallable)
    void SetUpPanel(FBMPackagedBeerData BeerData);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetBeerName(const FText& BeerName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetActivtyBeerSubmittedTo(const FText& BeerName, ESlateVisibility ActivityBeerVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OpenPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetStatsPanelHolder();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavourNotesList();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMWFlavorList* GetFlavourList();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ClosePanel();
    
};

