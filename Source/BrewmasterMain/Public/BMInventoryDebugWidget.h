#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMInventoryDebugWidget.generated.h"

class UDataTable;
class AActor;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMInventoryDebugWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<UDataTable*> ItemDataTables;
    
public:
    UBMInventoryDebugWidget();
protected:
    UFUNCTION(BlueprintPure)
    TArray<FName> GetItemsAvaliableToCreate();
    
    UFUNCTION(BlueprintCallable)
    AActor* CreateActorFromData(FName ItemIDName);
    
};

