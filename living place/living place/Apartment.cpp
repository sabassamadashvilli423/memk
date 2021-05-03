#include "Apartment.h"
#include"Home.h"
Apartment::Apartment() {
	cout << "created" << endl;
}
Apartment::Apartment(string location, int floors, int amount, bool lift):Home(location, floors) {
	this->amount = amount;
	this->lift = lift;
}
void Apartment::print() {
	cout << location << " " << floors << " " << amount << " " << bool << endl;
}
