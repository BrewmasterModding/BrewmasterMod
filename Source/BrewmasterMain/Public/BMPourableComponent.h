#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECarryState.h"
#include "UObject/NoExportTypes.h"
#include "BMPourableComponent.generated.h"

class UBMCarryableComponent;
class UBMAnalogueControlComponent;
class UBMObjectTransfer;
class UBMLidInteractionComponent;
class ABMDynamicContainer;
class UBMPouringMeshComponent;
class ABMSink;
class AActor;
class UCurveFloat;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMPourableComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBMAnalogueControlComponent* AnalogueControlComp;
    
    UPROPERTY(Instanced)
    UBMObjectTransfer* ObjectTransferComp;
    
    UPROPERTY(Instanced)
    UBMCarryableComponent* CarryComponent;
    
    UPROPERTY(Instanced)
    UBMLidInteractionComponent* LidComponent;
    
    UPROPERTY(Instanced)
    TArray<UBMPouringMeshComponent*> PourMeshComponents;
    
    UPROPERTY()
    ABMDynamicContainer* PourTarget;
    
    UPROPERTY()
    ABMSink* PouringIntoSink;
    
    UPROPERTY()
    AActor* InteracteeToTransferTo;
    
    UPROPERTY()
    FRotator OriginalRotationOfPourtarget;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float IncreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DecreaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveFloat* PouringMaxHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringAreaRotationChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float LiquidTransferScaler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PourSocketName;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    ECarryState PouringState;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    bool IsPouring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrottlePourArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThrottleAbovePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MiniumPourSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PouringRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AdditionalYawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LockToAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector CollisionPadding;
    
    UBMPourableComponent();
protected:
    UFUNCTION()
    void TransferLiquid();
    
    UFUNCTION()
    void TransferIngredient();
    
    UFUNCTION()
    void StopAdjustPour(float NewPouringWidth, float NewPouringHeight, FVector NewSplinePosition);
    
    UFUNCTION()
    void OpeningContainerDoneLocAndRot(AActor* ActorCalledDocking);
    
    UFUNCTION()
    void OpeningContainerDone(AActor* ActorCalledDocking);
    
    UFUNCTION()
    void CompleteMovement();
    
    UFUNCTION()
    void AdjustPour(bool bIncreasePour);
    
};

