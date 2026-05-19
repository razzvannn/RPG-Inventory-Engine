#pragma once
#include "Inventar.hpp"

class Player {
private:
    Inventar inv;

public:
    Inventar& getInv();
};