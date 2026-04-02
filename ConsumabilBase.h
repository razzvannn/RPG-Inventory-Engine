#pragma once
#include "Item.h"

class ConsumabilBase : virtual public Item {
public:
    explicit ConsumabilBase(const std::string& /*n*/) {}
};