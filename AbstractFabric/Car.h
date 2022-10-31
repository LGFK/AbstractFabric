#pragma once
#include<string>
#include<iostream>
using namespace std;
class Car
{
protected:
	string name;
	int amount_of_wheels = 0;
public:
	Car(const string & n,int wheels);
	virtual void ride() = 0;
	void Print()const;
	virtual ~Car();
	
};

