#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BMPlayerInventoryData.h"
#include "BMSaveGameData_ActorSaveData_Pointers.h"
#include "BMSaveGameData_ActorSaveData.h"
#include "BMSaveGameData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FDateTime Timestamp;
    
    UPROPERTY(VisibleAnywhere)
    FName LevelName;
    
    UPROPERTY(VisibleAnywhere)
    FVector PCLocation;
    
    UPROPERTY(VisibleAnywhere)
    FRotator PCRotator;
    
    UPROPERTY(VisibleAnywhere)
    FBMPlayerInventoryData PlayerInventoryData;
    
    UPROPERTY(VisibleAnywhere)
    TMap<FName, FBMSaveGameData_ActorSaveData_Pointers> PointersByCategory;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FBMSaveGameData_ActorSaveData> SavedActors;
    
    FBMSaveGameData();
};

