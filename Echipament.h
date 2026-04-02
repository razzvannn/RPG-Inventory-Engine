#pragma once
#include "Item.h"

class Echipament : virtual public Item {
public:
    Echipament(std::string n) : Item(n) {}
    virtual ~Echipament() {}
};