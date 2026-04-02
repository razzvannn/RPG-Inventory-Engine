#pragma once
#include "Armura.h"
class Scut : public Armura {
public:
    Scut(std::string n, int a) : Item(n), Armura(n, a) {}
    void afiseaza() const override { std::cout << "Scut: " << nume; }
};