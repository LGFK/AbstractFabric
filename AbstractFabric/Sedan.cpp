#include "Sedan.h"

Sedan::Sedan(const string& n,int wheels):Car(n,wheels)
{

}

void Sedan::ride()
{
	cout << "The" << name << "is riding" << endl;
}
