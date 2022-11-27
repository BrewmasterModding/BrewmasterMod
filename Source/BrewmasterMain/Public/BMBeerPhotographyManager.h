#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "EBMBeerGlassType.h"
#include "BMTableSettings.h"
#include "EBMPhotoSetupType.h"
#include "EBMBottleType.h"
#include "BMStaticPropType.h"
#include "EBMBeerCategory.h"
#include "BMPropPositionSet.h"
#include "BMPostProcessingSettings.h"
#include "BMPhotoLightingSettings.h"
#include "Engine/DataTable.h"
#include "BMCameraSettings.h"
#include "BMBackgroundSettings.h"
#include "BMBeerPhotographyManager.generated.h"

class ABMBaseBeerGlass;
class UDataTable;
class ABMBaseBeerBottle;
class UCheckBox;
class APostProcessVolume;
class AStaticMeshActor;
class ABMMetaGameFixedData;

UCLASS()
class BREWMASTERMAIN_API ABMBeerPhotographyManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ABMBaseBeerGlass* GlassActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMPhotoSetupType, UDataTable*> PhotoSetupDataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMBeerGlassType, TSubclassOf<ABMBaseBeerGlass>> GlassClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMBottleType, TSubclassOf<ABMBaseBeerBottle>> BottleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMBeerCategory, EBMBeerGlassType> GlassTypePerCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<EBMBeerCategory, EBMBottleType> BottleTypePerCategory;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    TArray<AActor*> PropActors;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    TArray<UCheckBox*> PropSeasonCheckboxes;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    APostProcessVolume* ScenePostProcessVolume;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AStaticMeshActor* TableActor;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AStaticMeshActor* BackdropActor;
    
    UPROPERTY(EditAnywhere)
    UDataTable* BeerStylesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* BeerPositions_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CameraSettings_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* PropPosition_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* PropType_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* PostProcessing_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* Background_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TableSettings_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* LightingSettings_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* HDRISettings_DT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* StaticPropSet_DT;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<ABMMetaGameFixedData> MetaGameDataClass;
    
public:
    ABMBeerPhotographyManager();
    UFUNCTION(BlueprintCallable)
    void SetPropCheckboxes(TArray<UCheckBox*> SeasonCheckboxes);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentTableSettings(TArray<FBMTableSettings> Settings);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentPropTypes(TArray<FBMStaticPropType> PropTypes);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentPropPositionSettings(TArray<FBMPropPositionSet> Settings);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentPostprocessingSettings(TArray<FBMPostProcessingSettings> Settings);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentLightingSettings(TArray<FBMPhotoLightingSettings> Settings);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentDatatable(TArray<FTableRowBase> Settings, TArray<FName> RowNames, UDataTable* DataTableToSaveTo);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentCameraSettings(TArray<FBMCameraSettings> CameraSettings);
    
    UFUNCTION(BlueprintCallable)
    void SaveCurrentBackgroundSettings(TArray<FBMBackgroundSettings> Settings);
    
    UFUNCTION(BlueprintPure)
    EBMBeerGlassType GetGlassTypeForBeerCategory(EBMBeerCategory BeerCategory);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetGlassClassFromGlassCategoryType(EBMBeerGlassType GlassCategory);
    
    UFUNCTION(BlueprintPure)
    EBMBottleType GetBottleTypeForBeerCategory(EBMBeerCategory BeerCategory);
    
    UFUNCTION(BlueprintPure)
    TSubclassOf<AActor> GetBottleClassFromBottleCategoryType(EBMBottleType BottleCategory);
    
    UFUNCTION(BlueprintCallable)
    void AddSelectedActorToStaticProps(FBMStaticPropType NewPropType);
    
};

