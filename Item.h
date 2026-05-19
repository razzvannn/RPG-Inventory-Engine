#pragma once
#include <string>
#include <iostream>

class Item {
protected:
    std::string nume;
    static int nrObiecte;

public:
    explicit Item(const std::string& n);
    virtual ~Item() = default;

    virtual void afiseaza() const = 0;
    virtual void foloseste() = 0;
    virtual Item* clona() const = 0;

    std::string getNume() const { return nume; } //Adaugat pentru Observer
    static int getTotal();
};
