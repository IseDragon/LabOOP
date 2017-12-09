#include "Feature.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void feature::InData(ifstream &ifst) {
	film::InData(ifst);
	ifst.getline(director, 256);
}