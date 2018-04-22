#include "Cartoon.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void cartoon::InData(ifstream &ifst) {
	film::InData(ifst);
	int k;
	ifst >> k;
	switch (k) {
	case 1:
		t = cartoon::type::PAINTED;
		break;
	case 2:
		t = cartoon::type::PUPPET;
		break;
	case 3:
		t = cartoon::type::PLASTICINE;
		break;
	}
}