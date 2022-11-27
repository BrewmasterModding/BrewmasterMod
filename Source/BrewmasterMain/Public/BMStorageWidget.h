#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMStorageWidget.generated.h"

class UBMItemWidget;
class UBMStorageInteraction;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMStorageWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMStorageInteraction* ActiveStorageInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UBMItemWidget* SpawnWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UBMItemWidget*> ItemArray;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool IsUIOpen;
    
public:
    UBMStorageWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadBPUI();
    
    UFUNCTION(BlueprintCallable)
    void ConnectToStorage(UBMStorageInteraction* Interaction);
    
};

