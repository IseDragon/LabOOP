#ifndef __cartoon__
#define __cartoon__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

class cartoon : public film {
public:
	enum type { PAINTED, PUPPET, PLASTICINE };
	type t;
	// �������������� ��������� ������
	void InData(ifstream &ifst);  // ���� 
	void Out(ofstream &ofst);     // ����� 
	void MMCartoon(ofstream &OutFile);
	void MMFeature(ofstream &OutFile);
	void MMDocumental(ofstream &OutFile);
	void MultiMethod(film* Other, ofstream  &OutFile);
	cartoon() {} // �������� ��� �������������.
};
#endif