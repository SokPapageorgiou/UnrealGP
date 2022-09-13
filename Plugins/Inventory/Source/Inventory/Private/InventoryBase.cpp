// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryBase.h"


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
	OnItemIsAddedToInventory.Broadcast(NewItem);
	return true;
}

void UInventoryBase::Debug()
{
	for (const auto item : Items)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15, FColor::Emerald,item.ItemPDA->Text.ToString());
	}
}

