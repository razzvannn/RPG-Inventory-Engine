#include "ItemFactory.h"
#include "Arma.h"
#include "Armura.h"
#include "Consumabil.h"
#include "Magie.h"
#include "Topor.h"

Item* ItemFactory::createItem(int tip, const std::string& nume, int param1, int param2) {
    switch (tip) {
        case 1: return new Arma(nume,param1);
        case 2: return new Armura(nume,param1);
        case 3: return new Consumabil(nume,param1);
        case 4: return new Magie(nume,param1);
        case 5: return new Topor(nume,param1,param2);
        default: return nullptr;
    }
}