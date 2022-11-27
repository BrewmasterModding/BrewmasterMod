#pragma once
#include "CoreMinimal.h"
#include "BMTopLevelWidget.h"
#include "BMInputActionData.h"
#include "Framework/Text/TextLayout.h"
#include "BMCreditsStructure.h"
#include "UObject/NoExportTypes.h"
#include "BMCreditsScreen.generated.h"

class UTexture2D;
class UDataTable;
class UBMScrollBox;
class UVerticalBox;
class UBMTextButtonWidget;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMCreditsScreen : public UBMTopLevelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData BackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ScrollSpeedInUMGUnits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CreditsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FString, TSoftObjectPtr<UTexture2D>> CompanyImages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* CompanyNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextTransformPolicy CompanyNameTransformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* RoleNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextTransformPolicy RoleNameTranformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* StaffNameTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETextTransformPolicy StaffNameTransformPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D SpacerSize;
    
protected:
    UPROPERTY()
    TArray<FBMCreditsStructure> Credits;
    
public:
    UBMCreditsScreen();
    UFUNCTION()
    void PopulateCredits();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMScrollBox* GetScrollBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    UVerticalBox* GetCreditListPanel();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMTextButtonWidget* GetBackButton();
    
protected:
    UFUNCTION()
    void FinishedCredits();
    
public:
    UFUNCTION()
    void AnimateCredits();
    
};

