#pragma once
#include "CoreMinimal.h"
#include "BMBaseIngredient.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMBaseIngredientBag.generated.h"

class UBMCarryableComponent;
class UBMPlayerAttachmentComponent;
class UMaterialInterface;
class UBMDockingAnimationComponent;
class USkeletalMeshComponent;
class UMaterialInstanceDynamic;
class USkeletalMesh;
class AActor;

UCLASS()
class BREWMASTERMAIN_API ABMBaseIngredientBag : public ABMBaseIngredient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMPlayerAttachmentComponent* AttachmentComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UBMDockingAnimationComponent* DockingComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USkeletalMeshComponent* ClipHanger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* IngredientMaterial;
    
    UPROPERTY()
    UMaterialInstanceDynamic* IngredientMaterialInstance;
    
    UPROPERTY(Instanced)
    UBMCarryableComponent* AttachedParentCarryComp;
    
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* SittingBag;
    
    UPROPERTY(EditDefaultsOnly)
    USkeletalMesh* Bag;
    
    UPROPERTY(EditDefaultsOnly)
    FDataTableRowHandle MorphTargetsData;
    
    UPROPERTY()
    FTimerHandle WetnessFadeHandle;
    
    UPROPERTY(SaveGame)
    bool BaseDampnessTriggered;
    
    UPROPERTY(EditDefaultsOnly)
    float TopHeightLagTime;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseDampnessStart;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseDampnessEnd;
    
    UPROPERTY(EditDefaultsOnly)
    float BaseDampnessFadeTime;
    
    UPROPERTY(SaveGame)
    bool bIsSitting;
    
    UPROPERTY(SaveGame)
    bool ClipVisible;
    
    UPROPERTY(SaveGame)
    FVector Position;
    
    UPROPERTY(EditDefaultsOnly)
    float BufferFromWall;
    
public:
    ABMBaseIngredientBag();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void UpdateLabel();
    
    UFUNCTION()
    void SetClipHangerVisibility();
    
    UFUNCTION()
    void CarryStateChanged(UBMCarryableComponent* CarryableComponent, AActor* Interactee);
    
    UFUNCTION()
    void AttachmentStateChanged(AActor* Actor);
    
};

