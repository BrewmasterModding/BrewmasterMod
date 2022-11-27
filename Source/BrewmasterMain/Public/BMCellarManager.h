#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "BMCellarProperties.h"
#include "BMSaveableActorInterface.h"
#include "BMCellarManager.generated.h"

UCLASS()
class BREWMASTERMAIN_API ABMCellarManager : public AInfo, public IBMSaveableActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(SaveGame)
    TArray<FBMCellarProperties> PackagedItemData;
    
public:
    ABMCellarManager();
    
    // Fix for true pure virtual functions not being implemented
};

