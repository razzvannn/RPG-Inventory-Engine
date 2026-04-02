#include "Arma.h"
using namespace std;

Arma::Arma(string n, int d) : Item(n), Echipament(n), damage(d) {}
void Arma::afiseaza() const { cout << "[Arma] " << nume << " | DMG: " << damage << endl; }
void Arma::foloseste() { cout << "Ataci cu " << nume << "!" << endl; }
Item* Arma::clona() const { return new Arma(*this); }