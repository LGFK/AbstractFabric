#pragma once
#include "Bus.h"
class Mercedes_Bus :
    public Bus
{
public:
    Mercedes_Bus(const string& mn, int wheels);
    void ride()override;
};

