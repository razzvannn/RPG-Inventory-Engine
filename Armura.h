#pragma once
#include "Echipament.h"

class Armura : public Echipament {
private:
    int protectie;

public:
    Armura(string nume, int protectie);


    void foloseste() override;
    void afiseaza() const override;


    Item* clona() const override;
};