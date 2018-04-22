#include "Feature.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void feature::InData(ifstream &ifst) {
	CheckInputFile(ifst);
	film::InData(ifst);
	ifst.getline(director, 256);
	CheckWrongInput(ifst);
}