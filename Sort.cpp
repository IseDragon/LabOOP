#include "Container.h"
#include <stdio.h> 
#include <stdlib.h>
#include <fstream>
#include <iostream>

using namespace std;

void container::Sort()
{
	for (int k = 0; k<n; k++)
	{
		int Koli = 0;
		node* prev;
		node* Node = mas[k];
		while (Node)
		{
			Node = Node->next;
			++Koli;
		}
		for (int i = 0; i < Koli - 1; i++)
		{
			node* prev = NULL;
			Node = mas[k];
			for (int j = i + 1; j < Koli; j++)
			{
				if (Node->f->Compare(Node->next->f))
				{
					node* next = Node->next;
					Node->next = Node->next->next;
					next->next = Node;
					if (Node == mas[k])
					{
						mas[k] = next;
						prev = next;
					}
					else
					{
						prev->next = next;
						prev = next;
					}
				}
				else
				{
					prev = Node;
					Node = Node->next;
				}
			}
		}
	}
}