#pragma once
#include "Player.h"

class Meniu {
private:
    static Meniu* inst;
    Player player;

    Meniu();

public:
    static Meniu* get();

    void run();
};