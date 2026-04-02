#include "Armura.h"
#include <iostream>

using namespace std;

Armura::Armura(string nume, int protectie)
    : Item(nume), Echipament(nume) {
    this->protectie = protectie;
}

void Armura::foloseste() {
    cout << "Echipezi armura " << nume << " (Protectie: " << protectie << ")" << endl;
}

void Armura::afiseaza() const {
    cout << "Armura: " << nume << " | Prot: " << protectie << endl;
}


Item* Armura::clona() const {
    return new Armura(*this);
}