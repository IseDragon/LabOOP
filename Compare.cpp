#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

bool film::Compare(film* f2)
{
	return (FuncFilm() > f2->FuncFilm());
}