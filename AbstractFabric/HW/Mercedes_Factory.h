#pragma once
#include "Abstract_Car_Factory.h"
#include"Mercedes_Cargo_Van.h"
#include"Mercedes_Bus.h"
#include"Mercedes_Sedan.h"
class Mercedes_Factory :
    public Abstract_Car_Factory
{
public:
    Mercedes_Factory();
    Car* createCargo_Van()override;
    Car* createSedan()override;
    Car* createBus()override;
};

