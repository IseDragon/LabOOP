#include "Film.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void film::InData(ifstream &ifst) {
	char t[256];
	ifst.getline(t, 256);
	ifst.getline(name, 256);
}