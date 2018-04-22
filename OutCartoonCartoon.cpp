#include "Cartoon.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void cartoon::OutCartoon(ostream &ofst) 
{
	CheckOutputFile(ofst);
	Out(ofst);
}