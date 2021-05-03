#pragma once
#include"Home.h"
class Apartment:public Home
{
public:
	int amount;
	bool lift;
	Apartment();
	Apartment(string location, int floors, int amount, bool lift);
	void print();
};

