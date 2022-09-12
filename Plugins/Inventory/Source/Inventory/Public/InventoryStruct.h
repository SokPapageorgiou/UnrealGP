#pragma once
#include "ItemPDA.h"

#include "InventoryStruct.generated.h"

USTRUCT()
struct FItemBase
{
	GENERATED_BODY()

	UPROPERTY()
	UItemPDA ItemPDA;

	UPROPERTY()
	float Durability;	
};
