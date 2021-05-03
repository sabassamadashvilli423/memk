#include <iostream>
#include "Omobility.h"
#include"Mobility.h"
#include<fstream>
#include<vector>
using namespace std;
void prSort(vector<Omobility> pr) {
	for (int j = 0; j < pr.size(); j++) {
		for (int i = 0; i < pr.size() - 1; i++) {
			if ((pr[i].highway + pr[i].city) / 2 > (pr[i + 1].highway + pr[i + 1].city) / 2)
				swap(pr[i], pr[i + 1]);
		}
	}
}
void puSort(vector<Omobility> pu) {
	for (int j = 0; j < pu.size(); j++) {
		for (int i = 0; i < pu.size() - 1; i++) {
			if (pu[i].raod < pu[i+1].raod)
				swap(pu[i], pu[i + 1]);
		}
	}
}
int main()
{
	ifstream fin("transport.txt");
	vector<Omobility> pr;
	vector<Omobility> pu;
	string h;
	Omobility t;
	while (fin >> h) {
		if (h == "public")
			fin >> t.count >> t.height >> t.length >> t.sigane >> t.raod;
		pu.push_back(t);
	}
	if (h == "private") {
		fin >> t.count >> t.height >> t.length >> t.sigane >> t.highway >> t.city;
		pr.push_back(t);
	}cin >> h;
	if (h == "public") {
		puSort(pu);
		for (int i = 0; i < pu.size(); i++) {
			pu[i].puprint();
		}
	}
	else
	if (h == "private") {
		prSort(pr);
		for (int i = 0; i < pr.size(); i++) {
			pr[i].prprint();
		}
	}
	
}