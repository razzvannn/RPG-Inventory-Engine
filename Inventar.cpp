#include "Inventar.h"
#include "Exceptii.h"
#include <iostream>

using namespace std;


Inventar::~Inventar() {
    for (auto x : items) delete x;
}

void Inventar::adauga(Item* i) {
    items.push_back(i);
}

void Inventar::afiseaza() {
    if (items.empty()) {
        cout << "Inventarul este gol.\n";
        return;
    }
    for (int i = 0; i < items.size(); i++) {
        cout << i << ". ";
        items[i]->afiseaza();
    }
}


void Inventar::foloseste(int i) {
    if (i < 0 || i >= (int)items.size()) {
        throw ExceptieIndexInvalid();
    }
    items[i]->foloseste();
}

void Inventar::sterge(int i) {
    if (i < 0 || i >= (int)items.size()) {
        throw ExceptieIndexInvalid();
    }
    delete items[i];
    items.erase(items.begin() + i);
}