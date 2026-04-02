#pragma once
#include "Item.h"

class Magie : virtual public Item {
protected:
    int charge;

public:
    Magie(string nume, int charge) : Item(nume), charge(charge) {}


    void afiseaza() const override;
    void foloseste() override;
    Item* clona() const override;

    int getCharge() const { return charge; }
};