#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::MultiMethod(ofstream  &OutFile)
{
	int k = 0;
	for (int i = 0; i<n; i++)
	{
		//cout << "\n" << i << "\n";
		if (mas[i] != NULL)
		{
			node* Node1 = mas[i];
			while (Node1)
			{
				for (int j = i; j<n; j++)
				{
					node* Node2;
					if (j == i)
						Node2 = Node1->next;
					else
						Node2 = mas[j];
					//cout << "\n" << i << "\n";
					if (mas[i] != NULL)
					{
						//vn2 = mas[i];
						while (Node2)
						{
							k++;
							//cout << k << endl;
							Node1->f->MultiMethod(Node2->f, OutFile);
							Node1->f->Out(OutFile);
							Node2->f->Out(OutFile);
							Node2 = Node2->next;
						}
					}
				}
				Node1 = Node1->next;
			}
		}
	}
}