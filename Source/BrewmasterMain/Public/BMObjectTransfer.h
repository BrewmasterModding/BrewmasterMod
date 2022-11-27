#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TransferCompleteDelegate.h"
#include "EBMTransferType.h"
#include "BMTransferData.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMObjectTransfer.generated.h"

class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMObjectTransfer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FTransferComplete FTransferCompleteEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMTransferType, FBMTransferData> DataMap;
    
    UPROPERTY(EditAnywhere)
    FName DefaultSocketName;
    
    UPROPERTY()
    bool bIsMoving;
    
    UPROPERTY()
    bool bUsingDockeeSocket;
    
    UPROPERTY()
    bool bUpdateSocketPosition;
    
    UPROPERTY()
    FTransform StartTransform;
    
    UPROPERTY()
    FTransform TargetTransform;
    
    UPROPERTY()
    EBMTransferType transferType;
    
    UPROPERTY(Instanced)
    USceneComponent* ActorSceneComponent;
    
    UPROPERTY(Instanced)
    USceneComponent* TargetMesh;
    
    UPROPERTY()
    FName TargetSocketName;
    
    UPROPERTY()
    float TimeThroughTransfer;
    
    UPROPERTY()
    float TimeScale;
    
public:
    UBMObjectTransfer();
    UFUNCTION(BlueprintCallable)
    void TransferObjectToSocket(USceneComponent* TransferingToObject, FName TransferSocketName, EBMTransferType Transfer, bool UsingDockeePointLocation);
    
    UFUNCTION(BlueprintCallable)
    void TransferObjectToLocation(FVector Location, FRotator Rotation, EBMTransferType Transfer, bool UsingDockeePointLocation);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetSocketTypeTransform(EBMTransferType NewTransferType);
    
    UFUNCTION(BlueprintCallable)
    void CancelTransfer();
    
};

