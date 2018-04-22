#include "Cartoon.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void cartoon::Out(ostream &ofst) 
{
	CheckOutputFile(ofst);
	film::Out(ofst);
	ofst << "It is cartoon." << endl;
	ofst << "It is ";
	switch (t) 
	{
		case cartoon::type::PAINTED:
			ofst << "painted." << endl;
			break;
		case cartoon::type::PUPPET:
			ofst << "puppet." << endl;
			break;
		case cartoon::type::PLASTICINE:
			ofst << "plasticine." << endl;
			break;
		default:
			cerr << "Wrong type of Cartoon!" << endl;
			exit(1);
	}
}