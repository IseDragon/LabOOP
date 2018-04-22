#include "Cartoon.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void cartoon::MMCartoon(ofstream &OutFile)
{
	OutFile << "\nCartoon and Cartoon" << endl;
}
void cartoon::MMFeature(ofstream &OutFile)
{
	OutFile << "\nFeature and Cartoon" << endl;
}
void cartoon::MMDocumental(ofstream &OutFile)
{
	OutFile << "\nDocumental and Cartoon" << endl;
}
void cartoon::MultiMethod(film* Other, ofstream  &OutFile)
{
	Other->MMCartoon(OutFile);
}