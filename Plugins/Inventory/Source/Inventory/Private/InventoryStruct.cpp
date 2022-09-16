#include "InventoryStruct.h"

FItemStruct::FItemStruct() : ItemPDA(nullptr), Durability(0){}

FItemStruct::FItemStruct(UGPItemPDA* ItemPDA) : ItemPDA(ItemPDA), Durability(100), Id(FGuid::NewGuid()){}

FItemStruct::FItemStruct(UGPItemPDA* ItemPDA, float Durability) : ItemPDA(ItemPDA), Durability(Durability), Id(FGuid::NewGuid()){}

