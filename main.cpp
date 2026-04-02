#include "Meniu.h"
#include "ItemSpecial.h"
int main() {
    Meniu joc;
    joc.run();
    ItemSpecial* testItem = new ItemSpecial("Test");
    Item* copie = testItem->clona();
    delete copie;
    delete testItem;
    return 0;
}