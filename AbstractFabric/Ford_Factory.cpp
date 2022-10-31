#include "Ford_Factory.h"

Ford_Factory::Ford_Factory() = default;


Car* Ford_Factory::createBus()
{
    return new Bus("Ford bus",6);
}

Car* Ford_Factory::createSedan()
{
    return new Sedan("Ford sedan",4);
}

Car* Ford_Factory::createCargo_Van()
{
    return new Cargo_Van("Ford cargo van",4);
}
