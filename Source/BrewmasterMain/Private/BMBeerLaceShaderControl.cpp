#include "BMBeerLaceShaderControl.h"

class UMaterialInstance;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class ABMDynamicContainer;

bool UBMBeerLaceShaderControl::UpdateBrewShaderProperties(FBMBeerProperties& State, UMaterialInterface* MaterialToUse, UMaterialInstanceDynamic* DynamicMaterial, ABMDynamicContainer* Container) {
    return false;
}

void UBMBeerLaceShaderControl::SetShaderProperties(ABMDynamicContainer* Container, bool InEditor) {
}

void UBMBeerLaceShaderControl::SetLaceTextureToUse(float HeadAmount) {
}

float UBMBeerLaceShaderControl::GetCodeValue(EBMLaceBeerShaderPropertyType PropertyType) {
    return 0.0f;
}

UMaterialInstanceDynamic* UBMBeerLaceShaderControl::AssignDefaultMaterial(UMaterialInstance* DefaultMaterial) {
    return NULL;
}

UBMBeerLaceShaderControl::UBMBeerLaceShaderControl() {
    this->LaceTopHeightMaskMultiplier = 8.00f;
    this->LaceBottomHeightMaskMultiplier = 1.00f;
    this->OpacityHeadHeightHeadOffsetMinimum = 0.00f;
}

