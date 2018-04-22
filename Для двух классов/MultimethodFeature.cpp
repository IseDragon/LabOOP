#include "Feature.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void feature::MMCartoon(ofstream &OutFile)
{
	OutFile << "\nCartoon and Feature" << endl;
}
void feature::MMFeature(ofstream &OutFile)
{
	OutFile << "\nFeature and Feature" << endl;
}
void feature::MMDocumental(ofstream &OutFile)
{
	OutFile << "\nDocumental and Feature" << endl;
}
void feature::MultiMethod(film* Other, ofstream  &OutFile)
{
	Other->MMFeature(OutFile);
}