#include "Item.h"
int Item::nrObiecte = 0;
Item::Item(std::string n) : nume(n) { nrObiecte++; }
Item::~Item() {}
int Item::getTotal() { return nrObiecte; }