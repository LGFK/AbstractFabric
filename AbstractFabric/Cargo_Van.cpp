#include "Cargo_Van.h"

Cargo_Van::Cargo_Van(const string& n,int wheels):Car(n,wheels)
{
}

void Cargo_Van::ride()
{
	cout << "the" << name << "is riding" << endl;
}
