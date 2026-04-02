#include "Magie.h"
using namespace std;

Magie::Magie(string n, int c) : Item(n), charge(c) {}
void Magie::afiseaza() const { cout << "[Magie] " << nume << " | Charge: " << charge << endl; }
void Magie::foloseste() { cout << "Ai lansat vraja " << nume << "!" << endl; }
Item* Magie::clona() const { return new Magie(*this); }