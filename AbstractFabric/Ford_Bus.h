#pragma once
#include "Bus.h"
class Ford_Bus :
    public Bus
{
public:
    Ford_Bus(const string& mn, int wheels);
    void ride()override;
};

