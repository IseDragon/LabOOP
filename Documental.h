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
		// �������������� ��������� ������
		void InData(ifstream &ifst);  // ���� 
		void Out(ofstream &ofst);     // ����� 
		void OutDocumental(ofstream &ofst);     // ����� 
		void MultiMethod(film* Other, ofstream &ofst);
		void MMCartoon(ofstream &OutFile);
		void MMFeature(ofstream &OutFile);
		void MMDocumental(ofstream &OutFile);
		documental() {} // �������� ��� �������������.
};
#endif