#pragma once
#include "CoreMinimal.h"
#include "BMRecipeData.h"
#include "BMBeerProperties.h"
#include "BMJobData.h"
#include "Engine/GameInstance.h"
#include "EBMMastery.h"
#include "BMSaveGameData.h"
#include "BMBeerStatsData.h"
#include "BMLabelDesign.h"
#include "EBMGameType.h"
#include "BMPackagedBeerData.h"
#include "BMPackagingAssetsData.h"
#include "BMPlayerInventoryData.h"
#include "BMBuildDetails.h"
#include "BMCellarProperties.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "EBMBuildType.h"
#include "BMAudioAssetListBase.h"
#include "BMGameInstance.generated.h"

class UTexture2D;
class ABMGameStats;
class UBMGameSettings;
class UWorld;

UCLASS(NonTransient)
class BREWMASTERMAIN_API UBMGameInstance : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsSaving;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsLoading;
    
    UPROPERTY()
    FText CurrentSaveName;
    
    UPROPERTY()
    FBMSaveGameData SaveGameData;
    
    UPROPERTY()
    FBMBeerProperties CurrentTastingBeerProperties;
    
    UPROPERTY()
    FBMBeerStatsData CurrentTastingBeerStatsData;
    
    UPROPERTY()
    FName CurrentContainerID;
    
    UPROPERTY()
    FBMPackagedBeerData CurrentPackagedBeer;
    
    UPROPERTY()
    EBMMastery CurrentMasteryLevel;
    
    UPROPERTY()
    int32 CurrentMasteryPoints;
    
    UPROPERTY()
    EBMGameType CurrentGameType;
    
    UPROPERTY()
    TArray<FName> UnlockedAchievments;
    
private:
    UPROPERTY()
    FName LabelID;
    
    UPROPERTY()
    FBMLabelDesign LabelDesign;
    
public:
    UPROPERTY()
    bool LastInputWasController;
    
    UPROPERTY()
    bool PackagedBeerToSet;
    
    UPROPERTY()
    TArray<FBMJobData> CurrentPossibleJobData;
    
    UPROPERTY()
    bool JobDataToUpdate;
    
    UPROPERTY()
    FName CurrentJob;
    
    UPROPERTY()
    FName CompletedJobName;
    
    UPROPERTY()
    FBMJobData CompletedJob;
    
    UPROPERTY()
    bool CompetitionAlreadySubmitted;
    
    UPROPERTY()
    bool CompetitionGenerated;
    
    UPROPERTY()
    bool CompetitionDataToUpdate;
    
    UPROPERTY()
    bool DemoScreenSeen;
    
    UPROPERTY()
    FName CompetitionData;
    
    UPROPERTY()
    FBMRecipeData CurrentPinnedRecipe;
    
    UPROPERTY()
    FBMRecipeData RecipeToSave;
    
    UPROPERTY()
    FBMPackagedBeerData PreviouslyPackagedData;
    
    UPROPERTY()
    TArray<FBMPackagedBeerData> StoredBeers;
    
    UPROPERTY()
    TArray<FBMPackagedBeerData> AllSubmittedBeers;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulateXbox;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulatePlaystation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulateSwitch;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulateXBoxXSX;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulateXboxOneGDK;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulatePS4;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool ForceSimulatePS5;
    
    UPROPERTY()
    TArray<FBMPackagingAssetsData> CurrentUnlockedPackagingAssets;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FName> SeenTutorialPopUps;
    
    UPROPERTY()
    bool bShouldSkipTutorial;
    
    UPROPERTY(BlueprintReadOnly)
    bool bShowPackagedBeers;
    
    UPROPERTY()
    TArray<FBMPackagedBeerData> BeersToRemove;
    
    UPROPERTY()
    FBMPlayerInventoryData OldPlayerInventoryData;
    
    UPROPERTY()
    TArray<TSoftObjectPtr<UTexture2D>> PlayerInventoryItem;
    
    UPROPERTY()
    TMap<int32, FDataTableRowHandle> ItemsToSpawn;
    
    UPROPERTY()
    TMap<int32, FBMPackagedBeerData> BeerPropertiesToUse;
    
    UPROPERTY()
    TMap<FName, FBMLabelDesign> LabelDesignData;
    
    UPROPERTY()
    TArray<FBMCellarProperties> CellarInfo;
    
    UPROPERTY()
    TArray<FName> CurrentNarratives;
    
    UPROPERTY()
    bool bTriggerAutosave;
    
    UPROPERTY()
    bool bApplicationIsPaused;
    
    UPROPERTY()
    bool ShouldDisplayExternalUIWhenPossible;
    
private:
    UPROPERTY()
    UBMAudioAssetListBase* AudioAssetList;
    
    UPROPERTY()
    FSoftClassPath LoadingScreenClassRef;
    
    UPROPERTY()
    ABMGameStats* GameStats;
    
    UPROPERTY()
    UBMGameSettings* GameSettings;
    
    UPROPERTY(VisibleAnywhere)
    int32 BMUserIndex;
    
protected:
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    bool bBuildIsPublic;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool bIsBuild;
    
    UPROPERTY(BlueprintReadOnly, Config, VisibleAnywhere)
    EBMBuildType BuildType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName BuildID;
    
    UPROPERTY(Config)
    int32 VersionMajor;
    
    UPROPERTY(Config)
    int32 VersionMinor;
    
    UPROPERTY(Config)
    int32 VersionBuildNum;
    
    UPROPERTY(Config)
    int32 VersionRevision;
    
    UPROPERTY(Config)
    int32 SaveVersion;
    
public:
    UBMGameInstance();
    UFUNCTION(BlueprintCallable)
    bool SaveRecipeToFile(const FBMRecipeData& RecipeData, const FString& SlotName);
    
    UFUNCTION(BlueprintPure)
    UBMGameSettings* GetGameSettings();
    
    UFUNCTION(BlueprintCallable)
    FBMBuildDetails GetBuildDetails();
    
    UFUNCTION()
    void EndLoadingScreen(UWorld* InLoadedWorld);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteRecipe(const FString& SlotName);
    
    UFUNCTION()
    void BeginLoadingScreen(const FString& MapName);
    
    UFUNCTION(BlueprintCallable)
    void AsyncSaveRecipeToFile(const FBMRecipeData& RecipeData, const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    void AsyncSaveDataFromFile(const FString& CampaignName);
    
    UFUNCTION(BlueprintCallable)
    void AsyncSaveData(const FString& CampaignName, int32 CampaignSlot);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadDataFromFile(const FString& CampaignName);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadData(const FString& CampaignName, int32 CampaignSlot);
    
};

