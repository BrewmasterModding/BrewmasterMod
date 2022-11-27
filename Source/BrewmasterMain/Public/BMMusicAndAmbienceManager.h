#pragma once
#include "CoreMinimal.h"
#include "EBMSeasonsEnum.h"
#include "GameFramework/Actor.h"
#include "BMMusicAndAmbienceManager.generated.h"

class UBMAudioAssetListBase;
class UAudioComponent;
class ABMTimeController;
class USoundBase;

UCLASS()
class BREWMASTERMAIN_API ABMMusicAndAmbienceManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeBetweenTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> AmbienceVolumes;
    
protected:
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY(Instanced)
    UAudioComponent* MusicAudioComponent;
    
    UPROPERTY()
    ABMTimeController* TimeController;
    
    UPROPERTY()
    USoundBase* NextSeasonTrack;
    
public:
    ABMMusicAndAmbienceManager();
protected:
    UFUNCTION()
    void SeasonChanged(EBMSeasonsEnum NewSeason);
    
};

