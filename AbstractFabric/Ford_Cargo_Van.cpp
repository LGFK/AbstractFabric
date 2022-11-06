#include "Ford_Cargo_Van.h"

Ford_Cargo_Van::Ford_Cargo_Van(const string& fn, int wheels):Cargo_Van(fn,wheels)
{
}

void Ford_Cargo_Van::ride()
{
	cout << "The" << name << "is riding" << endl;
}
