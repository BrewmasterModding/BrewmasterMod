#pragma once
#include "CoreMinimal.h"
#include "BMFramingBoundsShape.h"
#include "UObject/NoExportTypes.h"
#include "BMFramingBoundsBox.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingBoundsBox : public UBMFramingBoundsShape {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    float LineThickness;
    
public:
    UBMFramingBoundsBox();
    UFUNCTION(BlueprintCallable)
    void SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintPure)
    FVector GetUnscaledBoxExtent() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetScaledBoxExtent() const;
    
};

