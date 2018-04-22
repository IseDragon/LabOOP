#include "Feature.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void feature::MMCartoon(ostream &OutFile)
{
	OutFile << "\nCartoon and Feature" << endl;
}
void feature::MMFeature(ostream &OutFile)
{
	OutFile << "\nFeature and Feature" << endl;
}
void feature::MMDocumental(ostream &OutFile)
{
	OutFile << "\nDocumental and Feature" << endl;
}
void feature::MultiMethod(film* Other, ostream  &OutFile)
{
	Other->MMFeature(OutFile);
}