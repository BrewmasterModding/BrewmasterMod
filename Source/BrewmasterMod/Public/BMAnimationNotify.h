// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "BMAnimationNotify.generated.h"

/**
 * 
 */
UCLASS(CollapseCategories)
class BREWMASTERMOD_API UBMAnimationNotify : public UAnimNotify
{
	GENERATED_BODY()
private:
    UPROPERTY(EditAnywhere)
        UParticleSystem* PSTemplate;

    UPROPERTY(EditAnywhere)
        float ExampleFloat;

public:
	UBMAnimationNotify()
	{
	}
};
