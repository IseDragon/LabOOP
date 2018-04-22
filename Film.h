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
		// �������������, ���������� � ���� ������ �� ������
	public:
		static film* In(ifstream &ifst);
		virtual void InData(ifstream &ifst) = 0; // ����
		virtual void Out(ofstream &ofst) = 0;    // �����
		virtual void OutFeature(ofstream &ofst);
		virtual void OutCartoon(ofstream &ofst);
		virtual void OutDocumental(ofstream &ofst);
		virtual void MultiMethod(film* Other, ofstream &ofst) = 0;
		virtual void MMCartoon(ofstream &OutFile) = 0;
		virtual void MMFeature(ofstream &OutFile) = 0;
		virtual void MMDocumental(ofstream &OutFile) = 0;
		int SumElementsOfString(int n);
		int FuncFilm();
		bool Compare(film* f2);
};
#endif