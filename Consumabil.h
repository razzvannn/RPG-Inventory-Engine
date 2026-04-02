#pragma once
#include "ConsumabilBase.h"
#include <iostream>
#include <string>

using namespace std;

class Consumabil : public ConsumabilBase {
private:
    int heal;
public:
    Consumabil(string nume, int heal);
    void foloseste() override;
    void afiseaza() const override;
    Item* clona() const override;
};