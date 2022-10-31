#pragma once
#include"Car.h"
class Abstract_Car_Factory
{
public:
	Abstract_Car_Factory();
	virtual Car* createSedan() = 0;
	virtual Car* createBus() = 0;
	virtual Car* createCargo_Van() = 0;
	virtual ~Abstract_Car_Factory();
};

