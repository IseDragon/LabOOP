#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"
#include "Feature.h"
#include "Cartoon.h"

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
	default:
		return 0;
	}
	f->InData(ifst);
	return f;
}