#include "Documental.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void documental::MMCartoon(ofstream &OutFile)
{
	OutFile << "\nCartoon and Documental" << endl;
}
void documental::MMFeature(ofstream &OutFile)
{
	OutFile << "\nFeature and Documental" << endl;
}
void documental::MMDocumental(ofstream &OutFile)
{
	OutFile << "\nDocumental and Documental" << endl;
}
void documental::MultiMethod(film* Other, ofstream  &OutFile)
{
	Other->MMDocumental(OutFile);
}