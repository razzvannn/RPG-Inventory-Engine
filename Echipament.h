#pragma once
#include "Item.h"

class Echipament : virtual public Item {
public:
    explicit Echipament(const std::string& /*n*/) {}
    virtual ~Echipament()= default;
};