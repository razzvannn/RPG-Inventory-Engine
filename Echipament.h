#pragma once
#include "Item.h"

class Echipament : virtual public Item {
public:
    Echipament(string nume) : Item(nume) {}
};