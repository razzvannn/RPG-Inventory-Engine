#pragma once
#include "Item.h"

class Echipament : virtual public Item {
public:
    Echipament(std::string) {}
    virtual ~Echipament()= default;
};