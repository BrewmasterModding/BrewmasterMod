#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "BMAnimatedStrokeData.h"
#include "UObject/NoExportTypes.h"
#include "BMAnimatedStrokeDataAsset.generated.h"

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMAnimatedStrokeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush DefaultAnimatedStrokeBrush;
    
    UPROPERTY(EditAnywhere)
    TArray<FBMAnimatedStrokeData> AnimatedStrokeBrushes;
    
private:
    UPROPERTY(EditAnywhere)
    float SelectionStepSize;
    
    UPROPERTY(EditAnywhere)
    bool SelectBrushByHeight;
    
public:
    UBMAnimatedStrokeDataAsset();
    UFUNCTION(BlueprintCallable)
    FSlateBrush ChooseAnimatedStrokeBrushFromWidgetSize(const FVector2D WidgetLocalSize);
    
};

