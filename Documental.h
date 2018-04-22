#ifndef __documental__
#define __documental__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

class documental : public film
{
	public:
		int year;
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод 
		void Out(ostream &ofst);     // вывод 
		void OutDocumental(ostream &ofst);     // вывод 
		void MultiMethod(film* Other, ostream &ofst);
		void MMCartoon(ostream &OutFile);
		void MMFeature(ostream &OutFile);
		void MMDocumental(ostream &OutFile);
		documental() {} // создание без инициализации.
};
#endif