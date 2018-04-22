#ifndef _container
#define _container
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

struct node
{
	film *f;
	node* next;
};
class container
{
	public:
		int kol;
		int n;
		node** mas;
		container();
		~container() { Clear(); };
		void Clear();
		void In(ifstream & f1);
		void Out(ostream & f2);
		void OutCont(ostream & f2);
		void MultiMethod(ostream & f2);
		void OutFeature(ostream & f2);
		void OutCartoon(ostream & f2);
		void OutDocumental(ostream & f2);
		void Sort(int d);
};
#endif