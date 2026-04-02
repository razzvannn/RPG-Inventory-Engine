#pragma once
#include "Inventar.h"

class Player {
private:
    Inventar inv;

public:
    Inventar& getInv();
};