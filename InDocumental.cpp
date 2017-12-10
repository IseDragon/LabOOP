#include "Documental.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void documental::InData(ifstream &ifst) {
	film::InData(ifst);
	ifst >> year;
}