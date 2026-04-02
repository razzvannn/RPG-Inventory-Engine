#pragma once
#include "Echipament.h"
#include "ConsumabilBase.h"

class ItemSpecial : virtual public Echipament, virtual public ConsumabilBase {
public:
    ItemSpecial(std::string nume);
    void afiseaza() const override;
    void foloseste() override;
    Item* clona() const override;
};