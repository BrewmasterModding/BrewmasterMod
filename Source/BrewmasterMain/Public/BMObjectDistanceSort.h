#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BMObjectDistanceSort.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BREWMASTERMAIN_API UBMObjectDistanceSort : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 TranslucentSortPriorityStep;
    
    UBMObjectDistanceSort();
};

