#pragma once
#include "CoreMinimal.h"
#include "BMUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "BMAnimatedStroke.generated.h"

class UBMAnimatedStrokeDataAsset;
class UTweenContainer;
class UWidget;
class UMaterialInstanceDynamic;
class UImage;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMAnimatedStroke : public UBMUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrokeDelayInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StrokeAnimTime;
    
    UPROPERTY(EditAnywhere)
    UBMAnimatedStrokeDataAsset* AnimatedStrokeBrushesData;
    
private:
    UPROPERTY()
    UTweenContainer* ActiveTweenContainer;
    
    UPROPERTY()
    FVector2D LastLocalSize;
    
public:
    UBMAnimatedStroke();
    UFUNCTION(BlueprintCallable)
    void ResetAnimatedStroke();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimatedStroke();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInstanceDynamic* GetStrokeMaterialInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidget* GetStrokeImageParentWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UImage* GetStrokeImage();
    
};

