#pragma once
#include"Ford_Bus.h"
#include"Ford_Sedan.h"
#include"Ford_Cargo_Van.h"
#include "Abstract_Car_Factory.h"
class Ford_Factory :
    public Abstract_Car_Factory
{
public:
    Ford_Factory();
    Car* createBus()override;
    Car* createSedan() override;
    Car* createCargo_Van()override;
};

