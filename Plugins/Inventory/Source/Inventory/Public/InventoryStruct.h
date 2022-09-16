#pragma once
#include "GPItemPDA.h"

#include "InventoryStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_BODY()

	FItemStruct();
	FItemStruct(UGPItemPDA* ItemPDA);
	FItemStruct(UGPItemPDA* ItemPDA, float Durability);
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UGPItemPDA* ItemPDA;

	UPROPERTY(BlueprintReadWrite)
	float Durability;

	FGuid Id;

	bool operator ==(FItemStruct Other) const { return this->Id == Other.Id; }
};
