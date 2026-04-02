#pragma once
#include <vector>
#include "Item.h"

class Inventar {
private:
    std::vector<Item*> items;

public:
    Inventar();
    ~Inventar();

    Inventar(const Inventar&) = delete;
    Inventar& operator=(const Inventar&) = delete;

    void adauga(Item* i);
    void sterge(int idx);
    void afisare() const;
    void foloseste(int idx);
};