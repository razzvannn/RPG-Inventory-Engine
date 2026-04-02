#pragma once
#include <vector>
#include "Item.h"

class Inventar {
    std::vector<Item*> items;
public:
    Inventar() = default;
    ~Inventar();
    Inventar(const Inventar& other);
    Inventar& operator=(const Inventar& other);
    void adauga(Item* i);
    void afiseaza();
    void foloseste(int i);
    void sterge(int i);
};