#pragma once
#include "Echipament.h"

class Arma : public Echipament {
    int damage;
public:
    Arma(string nume, int damage);
    void foloseste() override;
    void afiseaza() const override;
    Item* clona() const override;
};