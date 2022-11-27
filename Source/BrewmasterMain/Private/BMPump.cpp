#include "BMPump.h"
#include "Components/ChildActorComponent.h"
#include "Components/SkeletalMeshComponent.h"

class ABMTube;

void ABMPump::UpdateTubeLiquidVisuals(ABMTube* CallingTube) {
}

ABMPump::ABMPump() {
    this->FirstTubeConnected = NULL;
    this->SecondTubeConnected = NULL;
    this->FirstConnectionSplineComponent = NULL;
    this->SecondConnectionSplineComponent = NULL;
    this->Inflow = CreateDefaultSubobject<UChildActorComponent>(TEXT("InflowTap"));
    this->Outflow = CreateDefaultSubobject<UChildActorComponent>(TEXT("OutflowTap"));
    this->InflowTap = NULL;
    this->OutflowTap = NULL;
    this->PumpMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PumpMesh"));
    this->LightsMat = NULL;
    this->LightMaterialSlot = 2;
    this->DynamicLights = NULL;
    this->AudioComponent = NULL;
}

