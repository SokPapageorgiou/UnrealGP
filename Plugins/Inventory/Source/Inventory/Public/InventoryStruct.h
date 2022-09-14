#pragma once
#include "GPItemPDA.h"

#include "InventoryStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()

	FItemStruct(UGPItemPDA* ItemPDA);
	FItemStruct(UGPItemPDA* ItemPDA, float Durability);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UGPItemPDA* ItemPDA;

	UPROPERTY(BlueprintReadWrite)
	float Durability;	
};
