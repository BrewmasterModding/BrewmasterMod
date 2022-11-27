#pragma once
#include "CoreMinimal.h"
#include "EBMInteractionType.h"
#include "Components/ArrowComponent.h"
#include "BMFramingArrow.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingArrow : public UArrowComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMInteractionType> InteractionTypesToUseArrow;
    
public:
    UBMFramingArrow();
    UFUNCTION()
    TArray<EBMInteractionType> GetTypeToUseBounds();
    
};

