#pragma once
#include "Consumabil.h"

class Hrana : public Consumabil {
public:
    Hrana(std::string n) : Item(n), Consumabil(n) {}
    void afiseaza() const override { std::cout << "Mancare: " << nume; }
};