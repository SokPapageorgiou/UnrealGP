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
	FMulticastDelegateSignature OnAddedToInventory;

	UPROPERTY(BlueprintAssignable)
	FMulticastDelegateSignature OnRemovedFromInventory;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	FItemStruct CreateItem(const FItemStruct& NewItem);
	
	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<FItemStruct>& GetItems();

	UFUNCTION(BlueprintCallable)
	bool AddItem(const FItemStruct& NewItem);

	UFUNCTION(BlueprintCallable)
	bool RemoveItem(const FItemStruct& NewItem);

	UFUNCTION(BlueprintCallable)
	bool TransferItem(UInventoryBase* ToInventory, const FItemStruct& Item);
	
	UFUNCTION(BlueprintCallable)
	void Debug();
	
	UPROPERTY(EditDefaultsOnly)
	bool bDebug;
	
private:
	TArray<FItemStruct> Items;
	
};
