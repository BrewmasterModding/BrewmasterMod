#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BMLabelComponent.generated.h"

class UMaterial;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMLabelComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterial* MaterialReference;
    
    UPROPERTY(BlueprintReadWrite)
    UMaterialInstanceDynamic* DynamicMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UStaticMeshComponent* LabelMeshComponent;
    
public:
    UBMLabelComponent();
    UFUNCTION(BlueprintImplementableEvent)
    void InitializeLabel(UStaticMeshComponent* LabelMesh, FName LabelDesign, bool bForceReload);
    
};

