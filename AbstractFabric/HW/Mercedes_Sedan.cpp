#include "Mercedes_Sedan.h"

Mercedes_Sedan::Mercedes_Sedan(const string& mn, int wheels):Sedan(mn,wheels)
{

}

void Mercedes_Sedan::ride()
{
	cout << "The" << name << "is riding" << endl;
}
