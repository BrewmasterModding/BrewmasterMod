#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BMItemData.h"
#include "BMItemWidget.generated.h"

class UBMStorageInteraction;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMItemWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMStorageInteraction* StorageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMItemData SpawnItemData;
    
    UBMItemWidget();
};

