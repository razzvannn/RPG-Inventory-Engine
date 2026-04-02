#include "ItemSpecial.h"
#include <iostream>
using namespace std;

ItemSpecial::ItemSpecial(string nume) : Item(nume), Echipament(nume), ConsumabilBase(nume) {}

void ItemSpecial::afiseaza() const {
    cout << "Item Special: " << nume << endl;
}

void ItemSpecial::foloseste() {
    cout << "Folosesti " << nume << "!" << endl;
}

Item* ItemSpecial::clona() const {
    return new ItemSpecial(*this);
}