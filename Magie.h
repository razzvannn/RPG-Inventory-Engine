#pragma once
#include "Item.h"

class Magie : public Item {
    int charge;
public:
    Magie(std::string n, int c);
    void afiseaza() const override;
    void foloseste() override;
    Item* clona() const override;
};