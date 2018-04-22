#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void CheckOutputFile(ostream &ofst);

void container::OutCont(ostream &ofst) {
	int k = 0;
	int k1 = 0;
	while (k1 != 1) {
		cout << "Input number:" << endl;
		cout << "1 - Out all elements" << endl;
		cout << "2 - Out only Cartoon" << endl;
		cout << "3 - Out only Documental" << endl;
		cout << "4 - Out only Feature" << endl;
		cout << "0 - exit" << endl;
		cin >> k;
		if (cout.fail())
		{
			cout << "Wrong input!" << endl;
			exit(1);
		}
		if (k < 0 || k > 4) {
			cout << "Incorrect choice! Try again!" << endl;
			continue;
		}
		else {
			k1 = 1;
			switch (k)
			{
			case 1:
				Out(ofst);
				break;
			case 2:
				OutCartoon(ofst);
				break;
			case 3:
				OutDocumental(ofst);
				break;
			case 4:
				OutFeature(ofst);
				break;
			default:
				break;
			}
		}
	}
}