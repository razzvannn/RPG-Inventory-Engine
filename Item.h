#pragma once
#include <string>
#include <iostream>

class Item {
protected:
    std::string nume;
    static int nrObiecte;

public:
    Item(std::string n);
    virtual ~Item();

    virtual void afiseaza() const = 0;
    virtual void foloseste() = 0;
    virtual Item* clona() const = 0;

    static int getTotal();
};
