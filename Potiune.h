#pragma once
#include "Consumabil.h"

class Potiune : public Consumabil {
public:
    Potiune(std::string n) : Item(n), Consumabil(n) {}
    void afiseaza() const override { std::cout << "Potiune: " << nume; }
};