#include "InventoryStruct.h"

FItemStruct::FItemStruct(UGPItemPDA* ItemPDA) : ItemPDA(ItemPDA), Durability(100){}

FItemStruct::FItemStruct(UGPItemPDA* ItemPDA, float Durability) : ItemPDA(ItemPDA), Durability(Durability){}

