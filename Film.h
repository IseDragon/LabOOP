#ifndef __film__
#define __film__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

class film {
public:
	char name[256];
	char country[256];
	// идентификация, порождение и ввод фигуры из потока
public:
	static film* In(ifstream &ifst);
	virtual void InData(ifstream &ifst) = 0; // ввод
	virtual void Out(ofstream &ofst) = 0;    // вывод
	virtual void OutFeature(ofstream &ofst);
	virtual void OutCartoon(ofstream &ofst);
	int SumElementsOfString(int n);
	int FuncFilm();
	bool Compare(film* f2);
};
#endif