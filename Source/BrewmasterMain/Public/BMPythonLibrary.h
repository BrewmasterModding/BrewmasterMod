#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BMPythonLibrary.generated.h"

class UStringTable;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMPythonLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMPythonLibrary();
    UFUNCTION(BlueprintCallable)
    static bool StringTableImportStrings(UStringTable* StringTable, const FString& InFilename);
    
};

