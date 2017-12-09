#include "Container.h"

void container::Clear()
{
	for (int i = 0; i<n; i++)
	{
		while (mas[i] != NULL)
		{
			node* vn = mas[i]->next;
			delete mas[i];
			mas[i] = vn;
		}
	}
	kol = 0;
}