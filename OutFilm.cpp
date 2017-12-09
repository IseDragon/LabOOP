#include "Film.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void film::Out(ofstream &ofst) {
	ofst << name << endl;
}