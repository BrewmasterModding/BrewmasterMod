#pragma once
#include "CoreMinimal.h"
#include "ActionDelegateDelegate.h"
#include "EBMInput.h"
#include "BMInputActionData.generated.h"

class UBMActionGlyph;

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMInputActionData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FActionDelegate ActionDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UBMActionGlyph* ActionGlyph;
    
    FBMInputActionData();
};

