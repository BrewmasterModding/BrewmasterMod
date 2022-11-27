#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BMAnimationNotify.generated.h"

class UParticleSystem;

UCLASS(CollapseCategories)
class UBMAnimationNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UParticleSystem* PSTemplate;
    
    UPROPERTY(EditAnywhere)
    float ExampleFloat;
    
public:
    UBMAnimationNotify();
};

