#include "Meniu.h"
#include "Arma.h"
#include "Armura.h"
#include "Consumabil.h"
#include "Magie.h"
#include "ItemSpecial.h"
#include <iostream>
#include <string>

using namespace std;

Meniu* Meniu::inst = nullptr;


Meniu::Meniu() {}

Meniu* Meniu::get() {
    if (!inst) inst = new Meniu();
    return inst;
}

void Meniu::run() {
    int op;
    do {
        cout << "\n1. Add | 2. Show | 3. Use | 4. Delete | 0. Exit\n";
        cout << "Optiune: ";
        cin >> op;

        try {
            if (op == 1) {
                int t;
                cout << "1. Arma | 2. Armura | 3. Consumabil | 4. Magie | 5. Special\n";
                cout << "Tip: ";
                cin >> t;

                string nume;
                cout << "Nume: ";
                cin.ignore();
                getline(cin, nume);

                if (t == 1) {
                    int dmg;
                    cout << "Damage: "; cin >> dmg;
                    player.getInv().adauga(new Arma(nume, dmg));
                }
                else if (t == 2) {
                    int prot;
                    cout << "Protectie: "; cin >> prot;
                    player.getInv().adauga(new Armura(nume, prot));
                }
                else if (t == 3) {
                    int heal;
                    cout << "Heal: "; cin >> heal;
                    player.getInv().adauga(new Consumabil(nume, heal));
                }
                else if (t == 4) {
                    int charge;
                    cout << "Charge: "; cin >> charge;
                    player.getInv().adauga(new Magie(nume, charge));
                }
                else if (t == 5) {
                    player.getInv().adauga(new ItemSpecial(nume));
                }
                cout << "Adaugat cu succes!\n";
            }
            else if (op == 2) {
                player.getInv().afiseaza();
            }
            else if (op == 3) {
                int idx;
                cout << "Index item de folosit: "; cin >> idx;
                player.getInv().foloseste(idx);
            }
            else if (op == 4) {
                int idx;
                cout << "Index item de sters: "; cin >> idx;
                player.getInv().sterge(idx);
            }

        } catch (const exception& e) {
            cout << "Eroare: " << e.what() << endl;
        }

    } while (op != 0);
}