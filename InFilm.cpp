#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"
#include "Feature.h"
#include "Cartoon.h"
#include "Documental.h"

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

film* film::In(ifstream &ifst) 
{
	CheckInputFile(ifst);
	film *f;
	int k;
	ifst >> k;
	CheckWrongInput(ifst);
	if (k <= 0 || k > 3)
	{
		cerr << "Wrong type of film!" << endl;
		exit(1);
	}
	switch (k) 
	{
		case 1:
			f = new feature;
			break;
		case 2:
			f = new cartoon;
			break;
		case 3:
			f = new documental;
			break;
		default:
			cerr << "Wrong type of film!" << endl;
			exit(1);
	}
	f->InData(ifst);
	return f;
}