#include "Mercedes_Cargo_Van.h"

Mercedes_Cargo_Van::Mercedes_Cargo_Van(const string &cn,int wheels) :Cargo_Van(cn,wheels)
{

}

void Mercedes_Cargo_Van::ride()
{
	cout << "The" << name << "is riding" << endl;
}
