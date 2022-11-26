#pragma once
#include "CoreMinimal.h"
#include "EBMInput.h"
#include "BMInteractionComponent.h"
#include "BMInWorldInteraction.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMInWorldInteraction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	EBMInput InputID;
    
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	FName ActionID;
    
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool bIsActive;
    
	UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
	UBMInteractionComponent* InteractionComponent;
    
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	AActor* Interactee;
    
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	bool bIsInvalid;
};
