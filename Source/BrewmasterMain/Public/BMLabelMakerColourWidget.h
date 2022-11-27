#pragma once
#include "CoreMinimal.h"
#include "BMLabelMakerValueWidget.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMLabelMakerColourWidget.generated.h"

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMLabelMakerColourWidget : public UBMLabelMakerValueWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FLinearColor ColourValue;
    
    UPROPERTY(BlueprintReadWrite)
    float LastNonZeroHValue;
    
public:
    UBMLabelMakerColourWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitColorSetWidget(FName inParamID, FLinearColor InParam, FVector inSliderColours);
    
    UFUNCTION(BlueprintCallable)
    void CreateColorPreview();
    
};

