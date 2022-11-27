#pragma once
#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "BMLCDCompoonent.generated.h"

class UMeshComponent;
class UMaterialInstance;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMLCDCompoonent : public UWidgetComponent {
    GENERATED_BODY()
public:
    UBMLCDCompoonent();
    UFUNCTION(BlueprintCallable)
    bool InitializeLCD(UMeshComponent* MeshComponentForLCD, int32 MaterialIndexForLCD, UMaterialInstance* WidgetMaterial);
    
};

