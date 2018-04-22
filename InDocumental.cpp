#include "Documental.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void documental::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	film::InData(ifst);
	ifst >> year;
	CheckWrongInput(ifst);
	if (year <= 0 || year > 2018) {
		cerr << "Incorrect year of Documental film" << endl;
		exit(1);
	}
}