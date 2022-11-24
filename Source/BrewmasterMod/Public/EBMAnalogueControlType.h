﻿#pragma once
#include "CoreMinimal.h"
#include "EBMAnalogueControlType.generated.h"

UENUM(BlueprintType)
enum class EBMAnalogueControlType : uint8
{
    Default,
    Pouring,
    Flowing,
};
