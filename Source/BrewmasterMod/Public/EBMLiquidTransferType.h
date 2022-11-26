#pragma once
#include "CoreMinimal.h"
#include "EBMLiquidTransferType.generated.h"

UENUM(BlueprintType)
enum class EBMLiquidTransferType : uint8
{
	NONE,
	Pouring,
	TapsTubes,
	Overflowing,
};
