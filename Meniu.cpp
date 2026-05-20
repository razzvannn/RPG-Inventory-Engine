#include "Meniu.h"
#include "ItemFactory.h"
#include "Exceptii.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

Meniu::Meniu() {
    player.getInv().adaugaObservator(&logger);
}

void Meniu::run() {
    int optiune = -1;

    while (true) {
        cout << "\n========================================" << endl;
        cout << "1.Adauga | 2.Sterge | 3.Afiseaza | 4.Foloseste | 0.Iesire" << endl;
        cout << "Alege: ";

        if (!(cin >> optiune)) {
            if (cin.eof()) break;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (optiune == 0) break;

        try {
            if (optiune == 1) {
                int tip;
                cout << "\nTip [1.Arma, 2.Armura, 3.Consumabil, 4.Magie, 5.Topor]: ";
                cin >> tip;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                string nume;
                cout << "Nume: ";
                getline(cin, nume);

                int param1 = 0, param2 = 0;
                if (tip == 1) { cout << "Damage: "; cin >> param1; }
                else if (tip == 2) { cout << "DEF: "; cin >> param1; }
                else if (tip == 3) { cout << "Heal: "; cin >> param1; }
                else if (tip == 4) { cout << "Charge: "; cin >> param1; }
                else if (tip == 5) {
                    cout << "Damage: "; cin >> param1;
                    cout << "Durabilitate: "; cin >> param2;
                }

                // Utilizare design pattern factory method pt decuplare
                Item* nou = ItemFactory::createItem(tip, nume, param1, param2);
                if (nou != nullptr) {
                    player.getInv().adauga(nou);
                } else {
                    cout << "Eroare!" << endl;
                }
            }
            else if (optiune == 2) {
                int idx;
                cout << "Index pentru stergere: ";
                cin >> idx;
                player.getInv().sterge(idx);
            }
            else if (optiune == 3) {
                player.getInv().afisare();
                cout << "Total Item create in sesiune: " << Item::getTotal() << endl;
            }
            else if (optiune == 4) {
                int idx;
                cout << "Index pentru folosire: ";
                cin >> idx;
                player.getInv().foloseste(idx);
            }
        }
        catch (const ExceptieIndexInvalid& e) {
            cout << "\n EROARE: " << e.what() << endl;
        }
        catch (const exception& e) {
            cout << "\n EROARE GENERICA: " << e.what() << endl;
        }
    }
}