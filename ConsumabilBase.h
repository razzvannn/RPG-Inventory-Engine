#pragma once
#include "Item.h"

class ConsumabilBase : virtual public Item {
public:
    ConsumabilBase(string nume) : Item(nume) {}
};