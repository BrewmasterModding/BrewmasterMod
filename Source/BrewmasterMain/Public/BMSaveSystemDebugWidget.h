#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMSaveSystemDebugWidget.generated.h"

class UBMGameInstance;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMSaveSystemDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FString CampaignName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 CampaignSlot;
    
public:
    UBMSaveSystemDebugWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SaveGame(UBMGameInstance* GameInstance);
    
    UFUNCTION(BlueprintCallable)
    void LoadGame(UBMGameInstance* GameInstance);
    
};

