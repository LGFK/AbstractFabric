#pragma once
#include "Car.h"
class Sedan :
    public Car
{
public:
    Sedan(const string& n,int wheels);
    void ride()override;
};

