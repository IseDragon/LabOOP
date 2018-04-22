#ifndef __film__
#define __film__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

class film 
{
	public:
		char name[256];
		char country[256];
		// идентификация, порождение и ввод фигуры из потока
	public:
		static film* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0; // ввод
		virtual void Out(ostream &ofst) = 0;    // вывод
		virtual void OutFeature(ostream &ofst);
		virtual void OutCartoon(ostream &ofst);
		virtual void OutDocumental(ostream &ofst);
		virtual void MultiMethod(film* Other, ostream &ofst) = 0;
		virtual void MMCartoon(ostream &OutFile) = 0;
		virtual void MMFeature(ostream &OutFile) = 0;
		virtual void MMDocumental(ostream &OutFile) = 0;
		int SumElementsOfString(int n);
		int FuncFilm();
		bool Compare(film* f2);
};
#endif