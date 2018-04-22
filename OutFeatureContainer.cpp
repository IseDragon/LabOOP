#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void container::OutFeature(ofstream &ofst)
{
	CheckOutputFile(ofst);
	ofst << "Container contains " << kol << " elements." << endl;
	for (int i = 0; i<n; i++)
	{
		if (mas[i] != NULL)
		{
			node* vn = mas[i];
			while (mas[i])
			{
				mas[i]->f->OutFeature(ofst);
				mas[i] = mas[i]->next;
			}
		}
	}
}