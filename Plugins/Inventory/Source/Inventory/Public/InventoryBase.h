// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InventoryStruct.h"
#include "Components/ActorComponent.h"
#include "InventoryBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMulticastDelegateSignature, FItemStruct, ItemStruct);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), Blueprintable)
class INVENTORY_API UInventoryBase : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UInventoryBase();
	
	UPROPERTY(BlueprintAssignable)
	FMulticastDelegateSignature OnItemIsAddedToInventory;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FItemStruct>& GetItems();

	UFUNCTION(BlueprintCallable)
	bool AddItem(const FItemStruct& NewItem);

	UFUNCTION(BlueprintCallable)
	void Debug();

	FItemStruct CreateItem(FItemStruct NewItem);
	
	UPROPERTY(EditDefaultsOnly)
	bool bDebug;
	
private:
	TArray<FItemStruct> Items;
	
};
