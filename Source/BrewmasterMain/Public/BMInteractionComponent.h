#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "OnInteractDelegate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "EBMInteractionType.h"
#include "UObject/NoExportTypes.h"
#include "BMInteractionComponent.generated.h"

class AActor;
class UMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMInteractionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bInteractableInWorld;
    
    UPROPERTY(EditDefaultsOnly)
    bool bInteractableInHand;
    
    UPROPERTY(EditDefaultsOnly)
    bool bHasInteractionSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanCameraMoveInSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator MaxRotationAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ExcludeAttachedActorsForFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float CameraMaxRotationTolerence;
    
    UPROPERTY()
    FVector CurrentCenterPoint;
    
    UPROPERTY()
    float Radius;
    
    UPROPERTY()
    bool ChangeOriginalCameraPosition;
    
    UPROPERTY()
    float YawOffsetPosition;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnInteract OnInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<AActor>, bool> InteractableTARGETClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TSubclassOf<AActor>, bool> InteractableACTIVEClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FName> HideActionIDPrompts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> OverrideActionIDForLocalisation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FName> MapActionIDsAsAxial;
    
    UPROPERTY(EditDefaultsOnly)
    bool IsGhostInteraction;
    
    UPROPERTY()
    FTimerHandle TimerHandle;
    
    UPROPERTY()
    FName LinkedRepeatableAction;
    
    UPROPERTY()
    int32 LinkedActionButtonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EBMInteractionType InteractionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    TArray<UMeshComponent*> MeshesToExcludeWithCollisionCheck;
    
    UBMInteractionComponent();
    UFUNCTION()
    void SetRadius(float Raduis);
    
    UFUNCTION()
    EBMInteractionType GetInteractionType();
    
    UFUNCTION(BlueprintPure)
    void GetFocusView(FVector& CameraForwards, FRotator& CameraRotation, FBoxSphereBounds& RequiredInView, TArray<AActor*>& FocusObjects);
    
};

