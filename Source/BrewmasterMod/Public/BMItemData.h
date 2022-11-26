#pragma once
#include "CoreMinimal.h"
#include "ESizeBand.h"
#include "EBMEquipmentCategory.h"
#include "EBMEquipmentSubCategory.h"
#include "EBMFurnitureCategory.h"
#include "EBMFurnitureSubcategory.h"
#include "EBMInventoryStorageLocation.h"
#include "EBMEquipmentMaterial.h"
#include "EBMIngredientContainerCategory.h"
#include "Engine/DataTable.h"
#include "BMItemData.generated.h"

USTRUCT(BlueprintType)
struct BREWMASTERMOD_API FBMItemData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FName UniqueItemName;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMInventoryStorageLocation StorageLocation;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMEquipmentCategory EquipmentCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMEquipmentSubCategory EquipmentSubCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMEquipmentMaterial EquipmentMaterialCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMIngredientContainerCategory IngredientContainerCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMFurnitureCategory FurnitureCategory;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	EBMFurnitureSubcategory FurnitureSubCategory;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSoftObjectPtr<UTexture2D> UIIcon;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	TSoftClassPtr<AActor> ItemClass;
    
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	FDataTableRowHandle ItemSpecificDataSource;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	TSoftObjectPtr<UStreamableRenderAsset> RootAssetOvverride;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	bool bDynamicObject;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	bool bCollisionEnabled;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float Grams;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	ESizeBand EquipmentSizeBand;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	bool Transparent;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 DimensionX;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 DimensionY;
    
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	int32 DimensionZ;
};
