#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UObject/NoExportTypes.h"
#include "ArrowDirection.h"
#include "EnabledInteractionsActions.h"
#include "BMTutorialConditions.h"
#include "BMTutorialPopUpData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMAIN_API FBMTutorialPopUpData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName PopupID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName ScreenName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FVector2D ScreenPosition;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bIsArrowActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    ArrowDirection ArrowDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    bool bManuallyClosed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName LeadsToPopUpID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FName TutorialStageActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> TutorialStageComplete;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FBMTutorialConditions TriggerConditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> bPopupsShown;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    TArray<FName> bPopupsNotShown;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TArray<EnabledInteractionsActions> EnabledInteractions;
    
    UPROPERTY(EditAnywhere, SaveGame)
    bool bRepeatable;
    
    FBMTutorialPopUpData();
};

