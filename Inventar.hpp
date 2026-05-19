#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Item.h"
#include "Exceptii.h"

class IObserver {
public:
    virtual void update(const std::string& actiune, const std::string& numeItem) = 0;
    virtual ~IObserver() = default;
};

class Observable {
private:
    std::vector<IObserver*> observatori;
public:
    void adaugaObservator(IObserver* obs) {
        if (obs) {
            observatori.push_back(obs);
        }
    }
    void notifica(const std::string& actiune, const std::string& numeItem) {
        for (auto* obs : observatori) {
            obs->update(actiune, numeItem);
        }
    }
};

class InventoryLogger : public IObserver {
public:
    void update(const std::string& actiune, const std::string& numeItem) override {
        std::cout << "[SISTEM LOG]: S-a efectuat actiunea '" << actiune
                  << "' pe obiectul: " << numeItem << std::endl;
    }
};

template <typename T>
class Inventar : public Observable {
private:
    std::vector<T> items;

public:
    Inventar() = default;

    ~Inventar() {
        for (auto* i : items) {
            delete i;
        }
        items.clear();
    }


    Inventar(const Inventar&) = delete;
    Inventar& operator=(const Inventar&) = delete;

    void adauga(T i) {
        if (i != nullptr) {
            items.push_back(i);
            this->notifica("ADAUGARE", i->getNume());
        }
    }

    void sterge(int idx) {
        if (idx < 0 || (size_t)idx >= items.size()) {
            throw ExceptieIndexInvalid();
        }
        T deSters = items[idx];
        std::string numeSters = deSters->getNume();

        delete deSters;
        items.erase(items.begin() + idx);

        this->notifica("STERGERE", numeSters);
    }

    void afisare() const {
        if (items.empty()) {
            std::cout << "Inventarul este gol." << std::endl;
            return;
        }
        for (size_t i = 0; i < items.size(); ++i) {
            std::cout << i << ". ";
            items[i]->afiseaza();
        }
    }

    void foloseste(int idx) {
        if (idx < 0 || (size_t)idx >= items.size()) {
            std::cout << "Eroare: Nu pot folosi un obiect inexistent!" << std::endl;
            return;
        }
        items[idx]->foloseste();
    }
};