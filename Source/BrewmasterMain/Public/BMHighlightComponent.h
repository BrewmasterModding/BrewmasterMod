#pragma once
#include "CoreMinimal.h"
#include "BMInteractionComponent.h"
#include "Engine/EngineTypes.h"
#include "EBMHighlightTypes.h"
#include "BMHighlightComponent.generated.h"

class UBMCarryableComponent;
class ABMTube;
class ABMBaseTap;
class ABMDynamicContainer;
class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMHighlightComponent : public UBMInteractionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, EBMHighlightTypes> HighlightComponentMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool TreatAsBaseParentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ABMBaseTap* Tap;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ABMDynamicContainer* Container;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ABMTube*> Tubes;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsTube;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsShowingTubeConnection;
    
    UPROPERTY()
    FTimerHandle HideConnectionTimerHandle;
    
    UPROPERTY()
    float HighlightTime;
    
public:
    UBMHighlightComponent();
    UFUNCTION()
    void ShowTubeConnection();
    
    UFUNCTION()
    void HideTubeConnection();
    
    UFUNCTION()
    void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
};

