#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void container::Out(ofstream &ofst)
{
	CheckOutputFile(ofst);
	ofst << "Container contains " << kol << " elements."<<endl;
	for (int i = 0; i<n; i++)
	{
		if (mas[i] != NULL)
		{
			node* vn = mas[i];
			while (mas[i])
			{
				mas[i]->f->Out(ofst);
				ofst << "Number of vowels = " << mas[i]->f->FuncFilm() << endl;
				mas[i] = mas[i]->next;
			}
		}
	}
}