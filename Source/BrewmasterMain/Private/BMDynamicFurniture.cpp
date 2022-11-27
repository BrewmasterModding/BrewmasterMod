#include "BMDynamicFurniture.h"
#include "Components/StaticMeshComponent.h"

ABMDynamicFurniture::ABMDynamicFurniture() {
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}

