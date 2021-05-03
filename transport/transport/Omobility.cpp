#include "Omobility.h"
#include"Mobility.h"
#include<iostream>
using namespace std;
Omobility::Omobility() {
	cout << "createed" << endl;
}
Omobility::Omobility(int count, int height, int length, int sigane, int raod, int highway, int city) :Mobility(height, sigane, count, length) {
	this->raod = raod;
	this->city = city;
	this->highway = highway;
}
void Omobility::prprint() {
	cout << count << " " << height << " " << length << " " << sigane << " " << highway << " " << city << endl;
}
void Omobility::puprint() {
	cout << count << " " << height << " " << length << " " << sigane << " " << raod << endl;
}