#ifndef __feature__
#define __feature__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

class feature : public film {
public:
	char director[256];
	void InData(ifstream &ifst);  // ���� 
	void Out(ofstream &ofst);     // ����� 
	void OutFeature(ofstream &ofst);     // ����� 
	feature() {} // �������� ��� �������������.
};
#endif