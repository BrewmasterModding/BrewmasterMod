#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UObject/NoExportTypes.h"
#include "TextFlowTest.generated.h"

class UVerticalBox;
class UDataTable;
class UBMRichText;

UCLASS(EditInlineNew)
class BREWMASTERMAIN_API UTextFlowTest : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* LeftPage;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UVerticalBox* RightPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText PageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ProjectedTextBoxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UDataTable* TextStyle;
    
    UPROPERTY(Instanced)
    UBMRichText* CachedRichText;
    
    UPROPERTY(Instanced)
    TArray<UBMRichText*> GeneratedTextBoxes;
    
    UPROPERTY()
    int32 TickCounter;
    
    UTextFlowTest();
    UFUNCTION(BlueprintCallable)
    void TestGetTextFromOneBoxPerPage();
    
    UFUNCTION(BlueprintCallable)
    void TestGetTextFromMultipleBoxesPerPage();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetRightPageFirstTextBox();
    
    UFUNCTION(BlueprintImplementableEvent)
    TArray<UBMRichText*> GetLeftPageTextBoxes();
    
    UFUNCTION(BlueprintImplementableEvent)
    UBMRichText* GetLeftPageFirstTextBox();
    
};

