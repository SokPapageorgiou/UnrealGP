#pragma once
#include "GPItemPDA.h"

#include "InventoryStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UGPItemPDA* ItemPDA;

	UPROPERTY(BlueprintReadWrite)
	float Durability;	
};
