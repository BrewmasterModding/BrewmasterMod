#pragma once
#include "CoreMinimal.h"
#include "EBMCatalogueSeasonsEnum.generated.h"

UENUM(BlueprintType)
enum class EBMCatalogueSeasonsEnum : uint8
{
    NONE,
    Ingredient,
    Equipment,
    Furniture,
    PackagingItems,
    CommercialProductionSlot,
    CommercialProductionBoost,
};
