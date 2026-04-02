#pragma once
#include "Item.h"

class ConsumabilBase : virtual public Item {
public:
    ConsumabilBase(std::string nume) : Item(nume) {}
};