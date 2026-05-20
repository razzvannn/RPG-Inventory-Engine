#pragma once
#include "Inventar.hpp"
#include "Item.h"

class Player {
private:
    Inventar<Item*> inv; //Utilizare Template

public:
    Inventar<Item*>& getInv() ;
};