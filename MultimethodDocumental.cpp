#include "Documental.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void documental::MMCartoon(ostream &OutFile)
{
	OutFile << "\nCartoon and Documental" << endl;
}
void documental::MMFeature(ostream &OutFile)
{
	OutFile << "\nFeature and Documental" << endl;
}
void documental::MMDocumental(ostream &OutFile)
{
	OutFile << "\nDocumental and Documental" << endl;
}
void documental::MultiMethod(film* Other, ostream  &OutFile)
{
	Other->MMDocumental(OutFile);
}