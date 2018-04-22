#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

int film::FuncFilm()
{
	char glasnie[] = "aeiouAEIOUàóîûèıÿş¸åÀÓÎÛÈİßŞ¨Å";
	int kol = 0;
	for (int i = 0; i < strlen(name); ++i)
	{
		if (strchr(glasnie, name[i]))
		{
			++kol;
		}
	}
	return kol;
}