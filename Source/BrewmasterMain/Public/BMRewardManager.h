#pragma once
#include "CoreMinimal.h"
#include "BMRewardData.h"
#include "EBMMastery.h"
#include "GameFramework/Info.h"
#include "EBMReputation.h"
#include "BMBreweryRewardData.h"
#include "BMRewardManager.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMRewardManager : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMReputation, int32> PointsToReachReputationLevel;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMMastery, int32> PointsToReachMasteryLevel;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<EBMMastery, FBMRewardData> RewardsAtMasteryLevel;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<FName, FBMBreweryRewardData> BreweryRewardData;
    
public:
    ABMRewardManager();
    UFUNCTION(BlueprintCallable)
    void AddBeerTokens(int32 NumberOfBeerTokens);
    
};

