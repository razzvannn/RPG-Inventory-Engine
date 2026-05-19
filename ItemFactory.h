#pragma once
#include "Item.h"
#include <string>

class ItemFactory {
public:
    static Item* createItem(int tip, const std::string& nume, int param1, int param2=0);
};