#include "Cartoon.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void cartoon::OutCartoon(ofstream &ofst) {
	CheckOutputFile(ofst);
	Out(ofst);
}