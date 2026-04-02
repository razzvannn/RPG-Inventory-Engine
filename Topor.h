#pragma once
#include "Arma.h"

class Topor : public Arma {
    int durabilitate;
public:
    explicit Topor(const std::string& n, int d, int dur)
        : Item(n), Echipament(n), Arma(n, d), durabilitate(dur) {}

    void afiseaza() const override {
        Arma::afiseaza();
        std::cout << " (Durabilitate: " << durabilitate << ")";
    }

    Item* clona() const override { return new Topor(*this); }
};