#include "Consumabil.h"
#include <iostream>

using namespace std;

Consumabil::Consumabil(string n, int h) : Item(n), heal(h) {}

void Consumabil::afiseaza() const {
    cout << "[Consumabil] " << nume << " | Heal: " << heal << endl;
}

void Consumabil::foloseste() {
    cout << "Ai baut " << nume << "." << endl;
}

Item* Consumabil::clona() const {
    return new Consumabil(*this);
}