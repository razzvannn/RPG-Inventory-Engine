#pragma once
#include "Echipament.h"
#include "ConsumabilBase.h"

class ItemSpecial : public Echipament, public ConsumabilBase {
public:
    ItemSpecial(string nume);
    void foloseste() override;
    void afiseaza() const override;
    Item* clona() const override;
};