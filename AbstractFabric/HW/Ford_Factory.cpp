#include "Ford_Factory.h"

Ford_Factory::Ford_Factory() = default;


Car* Ford_Factory::createBus()
{
    return new Ford_Bus("Ford bus",6);
}

Car* Ford_Factory::createSedan()
{
    return new Ford_Sedan("Ford sedan",4);
}

Car* Ford_Factory::createCargo_Van()
{
    return new Ford_Cargo_Van("Ford cargo van",4);
}
