#pragma once
#include "GPItemPDA.h"

#include "InventoryStruct.generated.h"

USTRUCT()
struct FItemStruct
{
	GENERATED_BODY()

	UPROPERTY()
	UGPItemPDA* ItemPDA;

	UPROPERTY()
	float Durability;	
};
