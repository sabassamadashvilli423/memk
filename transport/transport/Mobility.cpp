#include "Mobility.h"
#include<iostream>
using  namespace std;
Mobility::Mobility() {
	cout << "created" << endl;
}
Mobility::Mobility(int count, int height, int length, int sigane) {
	this->count = count;
	this->length = length;
	this->height = height;
	this->sigane = sigane;
}
void Mobility::print() {
	cout << count << " " << height << " " << length << " " << sigane;
}
