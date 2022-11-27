#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnPouringAreaChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPouringAreaChanged, float, NewPouringWidth, float, NewPouringHeight, FVector, NewSplineCenter);

