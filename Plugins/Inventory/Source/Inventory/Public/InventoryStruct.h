#pragma once
#include "UGPItemPDA.h"

#include "InventoryStruct.generated.h"

USTRUCT()
struct FItemBase
{
	GENERATED_BODY()

	UPROPERTY()
	UGPItemPDA* ItemPDA;

	UPROPERTY()
	float Durability;	
};
