#include "BMSyphon.h"
#include "BMSetFlowInteractionComp.h"
#include "Components/SkeletalMeshComponent.h"
#include "BMObjectTransfer.h"
#include "BMCarryableComponent.h"
#include "BMDockingAnimationComponent.h"
#include "BMPlayerAttachmentComponent.h"

class AActor;

void ABMSyphon::ItemDocked(AActor* Actor) {
}




ABMSyphon::ABMSyphon() {
    this->ContainerClips = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ContainerClip"));
    this->ContainerClamp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("ContainerClamp"));
    this->TubeClips = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("TubeClip"));
    this->SyphonBottom = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SyphonBottom"));
    this->SyphonTop = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SyphonTop"));
    this->ObjectTransferComponent = CreateDefaultSubobject<UBMObjectTransfer>(TEXT("ObjectTransferComponent"));
    this->CarryComponent = CreateDefaultSubobject<UBMCarryableComponent>(TEXT("CarryComponent"));
    this->DockingAnimationSystem = CreateDefaultSubobject<UBMDockingAnimationComponent>(TEXT("DockingAnimationComponent"));
    this->PlayerAttachmentComponent = CreateDefaultSubobject<UBMPlayerAttachmentComponent>(TEXT("PlayerAttachmentComponent"));
    this->SetFlowInteractionComponent = CreateDefaultSubobject<UBMSetFlowInteractionComp>(TEXT("SetFlowInteractionComponent"));
}

