#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item {
protected:
    string nume;

public:
    Item(string nume) : nume(nume) {}


    virtual ~Item() {}


    virtual void afiseaza() const {
        cout << "Item: " << nume;
    }

    virtual void foloseste() {
        cout << "Folosesti un item generic: " << nume << endl;
    }


    virtual Item* clona() const = 0;

    string getNume() const { return nume; }
};