#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"
#include "Feature.h"
#include "Cartoon.h"
#include "Documental.h"

using namespace std;

film* film::In(ifstream &ifst) {
	film *f;
	int k;
	ifst >> k;
	switch (k) {
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
		return 0;
	}
	f->InData(ifst);
	return f;
}