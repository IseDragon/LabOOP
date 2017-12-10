#include "Documental.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void documental::Out(ofstream &ofst) {
	film::Out(ofst);
	ofst << "It is documental film." << endl;
	ofst << "It was filmed in " << year << endl;
}