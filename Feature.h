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
	void InData(ifstream &ifst);  // ввод 
	void Out(ofstream &ofst);     // вывод 
	void OutFeature(ofstream &ofst);     // вывод 
	feature() {} // создание без инициализации.
};
#endif