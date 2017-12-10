#ifndef _container
#define _container
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

using namespace std;
struct node
{
	film *f;
	node* next;
};
class container
{
private:
	int kol;
	int n;
	node** mas;
public:
	container();
	~container() { Clear(); };
	void Clear();
	void In(ifstream & f1);
	void Out(ofstream & f2);
	void OutFeature(ofstream & f2);
	void OutCartoon(ofstream & f2);
	void OutDocumental(ofstream & f2);
	void Sort();
};
#endif