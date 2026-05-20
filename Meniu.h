#pragma once
#include "Player.h"
#include "Inventar.hpp"

class Meniu {
private:
    Player player;
    InventoryLogger logger;
public:
    Meniu();
    void run();
};