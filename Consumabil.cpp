#include "Consumabil.h"
#include <iostream>

Consumabil::Consumabil(string nume, int heal)
    : Item(nume), ConsumabilBase(nume) {
    this->heal = heal;
}

void Consumabil::foloseste() {
    cout << "Heal +" << heal << endl;
}

void Consumabil::afiseaza() const {
    cout << "Consumabil: " << nume << endl;
}

Item* Consumabil::clona() const {
    return new Consumabil(*this);
}