#pragma once
#include"Mobility.h"
class Omobility:public Mobility
{
public:
	int raod,highway,city;
	Omobility();
	Omobility(int count, int height, int length, int sigane, int raod, int highway, int city);
	void prprint();
	void puprint();
};

