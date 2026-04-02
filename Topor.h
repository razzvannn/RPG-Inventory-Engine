#pragma once
#include "Arma.h"

class Topor : public Arma {
    int durabilitate;
public:
    Topor(std::string n, int d, int dur)
    : Item(n), Echipament(n), Arma(n, d), durabilitate(dur) {}

    void afiseaza() const override {
        std::cout << "[Topor] " << nume << " | DMG: " << damage << " | Durabilitate: " << durabilitate << "%" << std::endl;
    }

    void foloseste() override {
        std::cout << "Lovit cu toporul!" << std::endl;
    }

    Item* clona() const override { return new Topor(*this); }
};