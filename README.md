# RPG Inventory Engine

### Overview
**RPG Inventory Engine** este o bibliotecă C++ modernă dezvoltată pentru gestiunea sistemelor de obiecte în jocuri de tip Role-Playing.

Proiectul a fost creat pentru a explora mecanismele de gestiune a memoriei și polimorfismul dinamic fără a recurge la framework-uri externe. Dispune de un meniu interactiv în terminal care permite crearea, manipularea și afișarea obiectelor dintr-un inventar.

---

### Conținutul Proiectului
Sistemul suportă în prezent următoarele categorii de iteme, fiecare cu logică proprie de afișare:

* **Arme (Weapons)**: Gestionează atributele de luptă și valoarea de damage.
* **Obiecte Magice (Magic Items)**: Implementează o resursă specială de tip **Charge** pentru monitorizarea utilizării și durabilității obiectului.
* **Echipament General**: Clase de bază pentru armuri și obiecte utilitare.

---

### Key Features

* **Arhitectură OOP Modulară**: Include ierarhii de moștenire clare: `Item` -> `Echipament` -> `Arma`.
* **Inventar Dinamic**: Utilizarea `std::vector<Item*>` pentru stocarea pointerilor către clasa de bază, demonstrând polimorfismul la runtime.
* **Sistem de Energie (Charge %)**: Obiectele magice utilizează un sistem de tip "Charge", oferind o monitorizare precisă a nivelului de energie/utilizări rămase.
* **Const-Correctness**: Metodele de afișare sunt marcate ca `const` pentru a garanta integritatea datelor în timpul execuției.
* **Metode Virtuale**: Asigură apelarea corectă a metodelor de tip `print` pentru fiecare subtip de obiect prin intermediul pointerilor de bază.

---

### Tech Stack & Dependencies
* **Limbaj**: C++20
* **Build System**: CMake 3.x
* **Version Control**: Git

---

### Instalare și Rulare

1. **Clonare repository**:
   ```bash
   git clone https://github.com/razzvannn/RPG-Inventory-Engine
   ```
2.**Configurare și compilare**:
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```
3. **Lansare**:

     Executați fișierul generat (ex:proiect1.exe sau ./proiect1).
