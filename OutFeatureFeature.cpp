#include "Feature.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void feature::OutFeature(ofstream &ofst) {
	CheckOutputFile(ofst);
	Out(ofst);
}