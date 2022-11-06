#include "Car.h"

Car::Car(const string& n,int wheels)
{
	name = n;
	amount_of_wheels = wheels;
}

void Car::Print() const
{
	cout << "car: " << name << endl;
	cout << "amout of wheels: " << amount_of_wheels << endl;
}

Car::~Car() = default;


