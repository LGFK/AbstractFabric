#pragma once
#include"Car.h"
class Cargo_Van:public Car
{
public:
	Cargo_Van(const string& n,int wheels);
	void ride()override;
};

