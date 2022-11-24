// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BMABVData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMABVData {
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float HighValue;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
        float LowValue;

    FBMABVData();
};
