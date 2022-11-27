#pragma once
#include "CoreMinimal.h"
#include "BMInputActionData.h"
#include "Blueprint/UserWidget.h"
#include "BMHUDActivityTracker.generated.h"

class UBMActionGlyph;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UBMHUDActivityTracker : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FBMInputActionData OpenJournalAction;
    
    UBMHUDActivityTracker();
    UFUNCTION(BlueprintImplementableEvent)
    void ShowTitleText(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ShowSubheaderText(bool IsVisible);
    
    UFUNCTION(BlueprintImplementableEvent)
    void SetCurrentTitle(const FText& Title);
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMActionGlyph* GetOpenJournalGlyph();
    
};

