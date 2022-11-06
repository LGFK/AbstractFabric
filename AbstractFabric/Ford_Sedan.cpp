#include "Ford_Sedan.h"

Ford_Sedan::Ford_Sedan(const string& fn, int wheels):Sedan(fn,wheels)
{
}

void Ford_Sedan::ride()
{
	cout << "This" << name << "is riding"<<endl;
}
