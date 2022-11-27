#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "EBMInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "BMFramingComponent.generated.h"

class UBMFramingArrow;
class UBMFramingBoundsShape;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMFramingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraExtraFramingMarginPercent;
    
    UPROPERTY(Instanced)
    TArray<UBMFramingArrow*> FramingArrows;
    
    UPROPERTY(Instanced)
    TArray<UBMFramingBoundsShape*> KeyFramingBounds;
    
public:
    UBMFramingComponent();
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetFramingBoundsOrigins(EBMInteractionType InteractionType);
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> GetFramingBounds(EBMInteractionType InteractionType);
    
    UFUNCTION()
    TArray<FVector> GetFramingArrows(EBMInteractionType InteractionType);
    
    UFUNCTION()
    float GetExtraMargin();
    
    UFUNCTION(BlueprintCallable)
    FVector GetCameraForwardDirection(EBMInteractionType InteractionType);
    
    UFUNCTION(BlueprintCallable)
    FRotator GetArrowDirection(EBMInteractionType InteractionType);
    
    UFUNCTION()
    void BeginPlay();
    
};

