// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryBase.h"


#define PRINTITEM(String) GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Emerald,String);


// Sets default values for this component's properties
UInventoryBase::UInventoryBase()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryBase::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInventoryBase::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

TArray<FItemStruct>& UInventoryBase::GetItems() { return Items; }

bool UInventoryBase::AddItem(const FItemStruct& NewItem)
{
	Items.Add(NewItem);
	OnAddedToInventory.Broadcast(NewItem);
	return true;
}

bool UInventoryBase::RemoveItem(const FItemStruct& Item)
{
	if(Items.Remove(Item) > 0)
	{
		OnRemovedFromInventory.Broadcast(Item);
		return true;
	}
	return false;	
}

bool UInventoryBase::TransferItem(UInventoryBase* ToInventory, const FItemStruct& Item)
{
	if(RemoveItem(Item)) return ToInventory -> AddItem(Item);

	return false;
}

FItemStruct UInventoryBase::CreateItem(const FItemStruct& NewItem)
{
	if(NewItem.ItemPDA) return FItemStruct{NewItem.ItemPDA};

	return FItemStruct{nullptr};
}

void UInventoryBase::Debug()
{
	if(!bDebug) return;
	
	for (const auto& item : Items)
	{
		PRINTITEM(item.ItemPDA->Text.ToString());
	}
}

