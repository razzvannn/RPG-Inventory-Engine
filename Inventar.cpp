#include "Inventar.h"
#include <iostream>
#include "Exceptii.h"
#include <stdexcept>

using namespace std;

Inventar::Inventar() {

}

Inventar::~Inventar() {
    for (auto* i : items) {
        delete i;
    }
    items.clear();
}

void Inventar::adauga(Item* i) {
    if (i != nullptr) {
        items.push_back(i);
    }
}

void Inventar::sterge(int idx) {
    if (idx < 0 || (size_t)idx >= items.size()) {
        throw ExceptieIndexInvalid();
    }
    delete items[idx];
    items.erase(items.begin() + idx);
}

void Inventar::afisare() const {
    if (items.empty()) {
        cout << "Inventarul este gol." << endl;
        return;
    }

    for (size_t i = 0; i < items.size(); ++i) {
        cout << i << ". ";
        items[i]->afiseaza();
    }
}

void Inventar::foloseste(int idx) {
    if (idx < 0 || (size_t)idx >= items.size()) {
        cout << "Eroare: Nu pot folosi un obiect inexistent!" << endl;
        return;
    }

    items[idx]->foloseste();
}