#pragma once
#include "Item.h"
class MagicItem : virtual public Item { 
protected:
    int charge;
public:
    MagicItem(std::string n, int c) : Item(n), charge(c) {}
};