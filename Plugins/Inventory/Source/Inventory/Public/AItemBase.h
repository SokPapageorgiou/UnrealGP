// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryStruct.h"
#include "Engine/StaticMeshActor.h"
#include "AItemBase.generated.h"

UCLASS()
class INVENTORY_API AItemBase : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AItemBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(ExposeOnSpawn=true))
	FItemStruct Item;
	
};
