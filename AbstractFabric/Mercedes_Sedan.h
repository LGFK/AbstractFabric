#pragma once
#include "Sedan.h"
class Mercedes_Sedan :
    public Sedan
{
public:
    Mercedes_Sedan(const string& mn, int wheels);
    void ride()override;
};

