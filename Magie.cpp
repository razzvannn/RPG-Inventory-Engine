#include "Magie.h"
#include <iostream>

void Magie::afiseaza() const {
    cout << "Obiect Magic: " << nume << " | Nivel Charge: [" << charge << "%]";
}

void Magie::foloseste() {
    if (charge > 0) {
        cout << "Ai activat magia " << nume << "! Charge ramas: " << --charge << "%" << endl;
    } else {
        cout << "Obiectul " << nume << " nu mai are energie (Charge 0%)." << endl;
    }
}

Item* Magie::clona() const {

    return new Magie(*this);
}