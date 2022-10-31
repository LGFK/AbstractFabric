#pragma once
#include "Car.h"
class Bus :
    public Car
{
public:
    Bus(const string&n,int wheels);
    void ride()override;

};

