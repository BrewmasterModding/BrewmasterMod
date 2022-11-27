#include "BMStaticFurniture.h"
#include "Components/StaticMeshComponent.h"

ABMStaticFurniture::ABMStaticFurniture() {
    this->bIsFloor = false;
    this->StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
}

