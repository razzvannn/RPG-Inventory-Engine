#include "Meniu.h"
#include "Arma.h"
#include "Armura.h"
#include "Consumabil.h"
#include "Magie.h"
#include "Topor.h"
#include "Exceptii.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

Meniu::Meniu() {}

void Meniu::run() {
    int optiune = -1;

    while (optiune != 0) {
        cout << "\n========================================" << endl;
        cout << "[1.Adauga | 2.Sterge | 3.Afiseaza | 4.Foloseste | 0.Iesire]" << endl;
        cout << "Alege: ";

        if (!(cin >> optiune)) {
            cout << "Te rog introdu un numar valid!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        try {
            if (optiune == 1) {
                int tip;
                cout << "\nTip [1.Arma, 2.Armura, 3.Consumabil, 4.Magie, 5.Topor]: ";
                cin >> tip;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                string nume;
                cout << "Nume obiect: ";
                getline(cin, nume);

                if (tip == 1) {
                    int dmg; cout << "Damage: "; cin >> dmg;
                    player.getInv().adauga(new Arma(nume, dmg));
                }
                else if (tip == 2) {
                    int prot; cout << "Aparare (DEF): "; cin >> prot;
                    player.getInv().adauga(new Armura(nume, prot));
                }
                else if (tip == 3) {
                    int heal; cout << "Heal: "; cin >> heal;
                    player.getInv().adauga(new Consumabil(nume, heal));
                }
                else if (tip == 4) {
                    int charge; cout << "Charge: "; cin >> charge;
                    player.getInv().adauga(new Magie(nume, charge));
                }
                else if (tip == 5) {
                    int dmg, dur;
                    cout << "Damage: "; cin >> dmg;
                    cout << "Durabilitate: "; cin >> dur;
                    player.getInv().adauga(new Topor(nume, dmg, dur));
                }
                else {
                    cout << "Tip invalid!" << endl;
                }
            }
            else if (optiune == 2) {
                int idx;
                cout << "Index pentru stergere: ";
                cin >> idx;
                player.getInv().sterge(idx);
                cout << "Obiect sters cu succes!" << endl;
            }
            else if (optiune == 3) {
                cout << "\n--- INVENTAR ---" << endl;
                player.getInv().afisare();
                cout << "Total Item create: " << Item::getTotal() << endl;
            }
            else if (optiune == 4) {
                int idx;
                cout << "Index pentru folosire: ";
                cin >> idx;
                player.getInv().foloseste(idx);
            }
        }
        catch (const ExceptieIndexInvalid& e) {
            cout << "\n[EROARE]: " << e.what() << endl;
        }
        catch (const exception& e) {
            cout << "\n[EROARE STANDARDA]: " << e.what() << endl;
        }

        cin.clear();
    }

    cout << "Iesire..." << endl;
}