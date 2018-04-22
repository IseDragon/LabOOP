#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Out(ofstream &ofst)
{
	ofst << "Container contains " << kol << " elements."<<endl;
	for (int i = 0; i<n; i++)
	{
		if (mas[i] != NULL)
		{
			node* vn = mas[i];
			while (mas[i])
			{
				mas[i]->f->Out(ofst);
				mas[i] = mas[i]->next;
			}
		}
	}
}