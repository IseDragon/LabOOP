#ifndef __feature__
#define __feature__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

class feature : public film 
{
	public:
		char director[256];
		void InData(ifstream &ifst);  // ввод 
		void Out(ostream &ofst);     // вывод 
		void OutFeature(ostream &ofst);     // вывод 
		void MultiMethod(film* Other, ostream &ofst);
		void MMCartoon(ostream &OutFile);
		void MMFeature(ostream &OutFile);
		void MMDocumental(ostream &OutFile);
		feature() {} // создание без инициализации.
};
#endif