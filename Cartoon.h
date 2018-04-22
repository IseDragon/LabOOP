#ifndef __cartoon__
#define __cartoon__
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include "Film.h"

using namespace std;

class cartoon : public film 
{
	public:
		enum type { PAINTED, PUPPET, PLASTICINE };
		type t;
		// переопределяем интерфейс класса
		void InData(ifstream &ifst);  // ввод 
		void Out(ofstream &ofst);     // вывод 
		void OutCartoon(ofstream &ofst);     // вывод 
		cartoon() {} // создание без инициализации.
};
#endif