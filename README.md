# RPG Inventory Engine

### Overview
**RPG Inventory Engine** este o bibliotecă C++ modernă dezvoltată pentru gestiunea sistemelor de obiecte în jocuri de tip Role-Playing. Proiectul explorează mecanismele avansate de gestiune a memoriei, polimorfismul dinamic și ierarhiile complexe de moștenire fără a recurge la framework-uri externe.

Sistemul dispune de un meniu interactiv în terminal care permite crearea, manipularea și afișarea obiectelor dintr-un inventar persistent pe durata execuției.

---

### Arhitectura Sistemului
Proiectul utilizează o ierarhie ramificată pentru a simula un sistem de joc real:

* **Arme & Armuri**: Gestionează atributele de luptă (DMG) și protecție (DEF).
* **Obiecte Magice**: Implementează o resursă specială de tip **Charge** pentru monitorizarea utilizării.
* **Consumabile**: Obiecte de tip hrană sau poțiuni care pot fi folosite o singură dată.
* **ItemSpecial**: Un obiect hibrid care demonstrează rezolvarea **Moștenirii în Diamant**.

---

### Key Features (Technical)

* **Moștenire în Diamant**: Utilizarea `virtual public` pentru a asigura o singură instanță a clasei de bază `Item` în obiectele hibride.
* **Arhitectură OOP Modulară**: Separare strictă între interfață (`.h`) și implementare (`.cpp`).
* **Inventar Polimorfic**: Utilizarea `std::vector<Item*>` pentru stocarea pointerilor, permițând apelarea metodelor specifice la runtime.
* **Tratarea Excepțiilor**: Validarea indexului de inventar prin excepții custom (`ExceptieIndexInvalid`) derivate din `std::exception`.
* **Gestiune Resurse**: Implementarea **Regulei celor 3** (dezactivarea copierii) pentru a preveni memory leaks și coruperea pointerilor.
* **Membri Statici**: Monitorizarea globală a numărului de obiecte create prin variabile și metode `static`.

---

### Tech Stack
* **Limbaj**: C++20
* **Build System**: CMake 3.x
* **Compilator**: Suport pentru standardul C++20 (GCC/Clang/MSVC)

---

### Instalare și Rulare

1.  **Clonare repository**:
    ```bash
    git clone https://github.com/razzvannn/RPG-Inventory-Engine
    ```

2.  **Configurare și compilare (CMake)**:
    ```bash
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```

3.  **Lansare**:
   * **Windows**: `proiect1.exe`
   * **Linux/macOS**: `./proiect1`

---

### Structura Meniului
1.  **Adaugă**: Creare obiecte (Arma, Armura, Consumabil, Magie, Topor).
2.  **Șterge**: Eliminare obiect din inventar (cu validare prin `try-catch`).
3.  **Afișează**: Vizualizarea listei de obiecte și a contorului static global.
4.  **Folosește**: Executarea acțiunii specifice fiecărui item.

---
