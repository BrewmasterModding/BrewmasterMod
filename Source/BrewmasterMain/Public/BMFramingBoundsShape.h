#pragma once
#include "CoreMinimal.h"
#include "Components/ShapeComponent.h"
#include "EBMInteractionType.h"
#include "BMFramingBoundsShape.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingBoundsShape : public UShapeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<EBMInteractionType> InteractionTypesToUseBounds;
    
public:
    UBMFramingBoundsShape();
    UFUNCTION()
    TArray<EBMInteractionType> GetTypeToUseBounds();
    
};

