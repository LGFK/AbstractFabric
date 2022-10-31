#include "Mercedes_Factory.h"

Mercedes_Factory::Mercedes_Factory() = default;


Car* Mercedes_Factory::createCargo_Van()
{
    return new Cargo_Van("Mercedes Cargo Van",4);
}

Car* Mercedes_Factory::createSedan()
{
    

    return  new Sedan("Mercedes Sedan",4);
}

Car* Mercedes_Factory::createBus()
{
    return new Bus("Mercedes Bus",8);
}
