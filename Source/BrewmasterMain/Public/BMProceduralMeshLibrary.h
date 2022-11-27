#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "KismetProceduralMeshLibrary.h"
#include "BMProceduralMeshLibrary.generated.h"

class UProceduralMeshComponent;
class UBMPouringMeshComponent;
class UMaterialInterface;

UCLASS(BlueprintType)
class BREWMASTERMAIN_API UBMProceduralMeshLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBMProceduralMeshLibrary();
    UFUNCTION(BlueprintCallable)
    static void BMSliceProceduralMesh(UProceduralMeshComponent* InProcMesh, UProceduralMeshComponent* OutProcMesh, UBMPouringMeshComponent* PouringSpline, FVector PlanePosition, FVector PlaneNormal, EProcMeshSliceCapOption CapOption, UMaterialInterface* CapMaterial, int32 CapCircleNum, bool SkipTriEarCheck, int32 BlackAlphaVertices, float AlphaScaler);
    
};

