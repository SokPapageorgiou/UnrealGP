// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UGPItemPDA.generated.h"

UCLASS(BlueprintType)
class INVENTORY_API UGPItemPDA : public UPrimaryDataAsset
{
	GENERATED_BODY()

	UStaticMesh Mesh;
	UTexture2D Tumbnail;
};
