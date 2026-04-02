#pragma once
#include "Item.h"

class Consumabil : public Item {
    int heal;
public:
    Consumabil(std::string n, int h);
    void afiseaza() const override;
    void foloseste() override;
    Item* clona() const override;
};
