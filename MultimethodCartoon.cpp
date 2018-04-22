#include "Cartoon.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void cartoon::MMCartoon(ostream &OutFile)
{
	OutFile << "\nCartoon and Cartoon" << endl;
}
void cartoon::MMFeature(ostream &OutFile)
{
	OutFile << "\nFeature and Cartoon" << endl;
}
void cartoon::MMDocumental(ostream &OutFile)
{
	OutFile << "\nDocumental and Cartoon" << endl;
}
void cartoon::MultiMethod(film* Other, ostream  &OutFile)
{
	Other->MMCartoon(OutFile);
}