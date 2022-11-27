#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BMTransparentLayers.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMTransparentLayers : public UActorComponent {
    GENERATED_BODY()
public:
    UBMTransparentLayers();
};

