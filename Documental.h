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
		void Out(ostream &ofst);     // ����� 
		void OutDocumental(ostream &ofst);     // ����� 
		void MultiMethod(film* Other, ostream &ofst);
		void MMCartoon(ostream &OutFile);
		void MMFeature(ostream &OutFile);
		void MMDocumental(ostream &OutFile);
		documental() {} // �������� ��� �������������.
};
#endif