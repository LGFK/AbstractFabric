#include"Car.h"
#include"Mercedes_Factory.h"
#include"Ford_Factory.h"
#include<vector>

int main()
{
	Mercedes_Factory mf;
	Ford_Factory ff;
	Abstract_Car_Factory* af;
	vector<Car*> arr;
	srand(time(0));
	for(int i = 0; i < 2; i++)
	{
		if (rand() % 2 == 0)
		{
			af = &mf;
			arr.push_back(af->createBus());
			arr.push_back(af->createCargo_Van());
			arr.push_back(af->createSedan());
		}
		else
		{
			af = &ff;
			arr.push_back(af->createBus());
			arr.push_back(af->createCargo_Van());
			arr.push_back(af->createSedan());
		}
	}
	for (auto i : arr)
	{
		i->Print();
	}
	for (auto i : arr)
	{
		delete i;
	}
	
}
