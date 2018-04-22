#include "Film.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void film::Out(ostream &ofst)
{
	CheckOutputFile(ofst);
	ofst << name << endl;
	ofst << "It was filmed in " << country << endl;
}