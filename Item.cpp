#include "Item.h"
int Item::nrObiecte = 0;
Item::Item(std::string n) : nume(n) { nrObiecte++; }
int Item::getTotal() { return nrObiecte; }