#pragma once
#include "Echipament.h"

class Arma : virtual public Echipament {
protected:
    int damage;
public:
    Arma(std::string n, int d);
    void afiseaza() const override;
    void foloseste() override;
    Item* clona() const override;
};