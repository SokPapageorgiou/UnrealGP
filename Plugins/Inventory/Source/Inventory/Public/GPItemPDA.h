// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GPItemPDA.generated.h"


UCLASS()
class INVENTORY_API UGPItemPDA : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic")
	FText Text;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic")
	UStaticMesh* Mesh;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category="Basic")
	UTexture2D* Thumbnail;	
};
