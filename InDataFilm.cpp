#include "Film.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void film::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	char t[256];
	ifst.getline(t, 256);
	CheckWrongInput(ifst);
	ifst.getline(name, 256);
	CheckWrongInput(ifst);
	ifst.getline(country, 256);
	CheckWrongInput(ifst);
}