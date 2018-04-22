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
		void Out(ofstream &ofst);     // вывод 
		void OutDocumental(ofstream &ofst);     // вывод 
		void MultiMethod(film* Other, ofstream &ofst);
		void MMCartoon(ofstream &OutFile);
		void MMFeature(ofstream &OutFile);
		void MMDocumental(ofstream &OutFile);
		documental() {} // создание без инициализации.
};
#endif