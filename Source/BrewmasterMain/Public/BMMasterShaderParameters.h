#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BMMasterShaderParameters.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMMasterShaderParameters : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FName, float> VectorShaderParameterProperties;
    
public:
    UBMMasterShaderParameters();
};

