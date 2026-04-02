#pragma once
#include "Echipament.h"

class Armura : public Echipament {
    int def;
public:
    Armura(std::string n, int a);
    void afiseaza() const override;
    void foloseste() override;
    Item* clona() const override;
};