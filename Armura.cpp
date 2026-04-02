#include "Armura.h"
using namespace std;

Armura::Armura(string n, int a) : Item(n), Echipament(n), def(a) {}
void Armura::afiseaza() const { cout << "[Armura] " << nume << " | DEF: " << def << endl; }
void Armura::foloseste() { cout << "Ai echipat armura " << nume << "." << endl; }
Item* Armura::clona() const { return new Armura(*this); }