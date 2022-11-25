#pragma once
#include "CoreMinimal.h"
#include "BMAttachPointID.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMAttachPointID
{
	GENERATED_BODY()
public:
	UPROPERTY(SaveGame)
	bool bIsValid;
    
	UPROPERTY(SaveGame)
	bool bIsSocket;
    
	UPROPERTY(SaveGame)
	FName SocketName;
    
	UPROPERTY(SaveGame)
	bool bIsClipPoint;
    
	UPROPERTY(SaveGame)
	int32 ClipPointBegin;
    
	UPROPERTY(SaveGame)
	int32 ClipPointSize;
    
	UPROPERTY(Instanced, SaveGame)
	USceneComponent* AttachToComponent;
};
