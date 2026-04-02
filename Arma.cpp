#include "Arma.h"

Arma::Arma(string nume, int damage) : Item(nume), Echipament(nume), damage(damage) {}
void Arma::foloseste() { cout << "Ataci cu " << nume << " dmg " << damage << endl; }
void Arma::afiseaza() const { cout << "Arma: " << nume << " dmg: " << damage << endl; }
Item* Arma::clona() const { return new Arma(*this); }