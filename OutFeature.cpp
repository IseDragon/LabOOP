#include "Feature.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void feature::Out(ofstream &ofst) {
	CheckOutputFile(ofst);
	film::Out(ofst);
	ofst << "It is feature film." << endl;
	ofst << "Its director is = " << director << endl;
}