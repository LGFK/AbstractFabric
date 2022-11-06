#include "Mercedes_Bus.h"

Mercedes_Bus::Mercedes_Bus(const string& mn, int wheels) :Bus(mn, wheels)
{

}

void Mercedes_Bus::ride()
{
	cout << "The" << name << "is riding" << endl;
}
