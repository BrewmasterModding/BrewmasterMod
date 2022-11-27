#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BMLabelRenderAssets.generated.h"

class UMaterialInstanceDynamic;
class UWidgetComponent;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMLabelRenderAssets : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInstanceDynamic* DynMaterialInstance;
    
    UPROPERTY(Instanced)
    TArray<UWidgetComponent*> TextWidgetComponent;
    
    UPROPERTY()
    bool bTextRenderApplied;
    
    FBMLabelRenderAssets();
};

