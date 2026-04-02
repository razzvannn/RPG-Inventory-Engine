#include "ItemSpecial.h"

ItemSpecial::ItemSpecial(string nume) : Item(nume), Echipament(nume), ConsumabilBase(nume) {}
void ItemSpecial::foloseste() { cout << "Item special folosit: " << nume << endl; }
void ItemSpecial::afiseaza() const { cout << "ItemSpecial: " << nume << endl; }
Item* ItemSpecial::clona() const { return new ItemSpecial(*this); }