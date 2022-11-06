#include "Ford_Bus.h"

Ford_Bus::Ford_Bus(const string& mn, int wheels):Bus(mn,wheels)
{

}

void Ford_Bus::ride()
{
	cout << "The" << name << "is riding" << endl;
}
