#pragma once
#include "Sedan.h"
class Ford_Sedan :
    public Sedan
{
public:
    Ford_Sedan(const string& fn, int wheels);
    void ride()override;
};

