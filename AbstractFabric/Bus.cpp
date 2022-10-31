#include "Bus.h"

Bus::Bus(const string& n,int wheels) :Car(n,wheels)
{

}

void Bus::ride()
{
	cout << "the" << name << "is riding" << endl;
}
