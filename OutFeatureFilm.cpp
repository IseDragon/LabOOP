#include "Film.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void film::OutFeature(ostream &ofst) 
{
	CheckOutputFile(ofst);
	ofst << endl;
}
