#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckInputFile(ifstream &ifst);
void CheckWrongInput(ifstream &ifst);

void container::In(ifstream &ifst)
{
	CheckInputFile(ifst);
	ifst >> kol;
	CheckWrongInput(ifst);
	if (kol < 0) 
	{
		cerr << "Wrong number of films" << endl;
		exit(1);
	}
	for (int i = 0; i<kol; i++)
	{
		film *f;
		f = f->In(ifst);
		int sum = 0;
		sum = f->SumElementsOfString(n);
		if (mas[sum] == NULL)
		{
			mas[sum] = new node;
			mas[sum]->next = NULL;
			mas[sum]->f = f;
		}
		else
		{
			node* vn = new node;
			vn->next = mas[sum];
			vn->f = f;
			mas[sum] = vn;
		}
	}
}