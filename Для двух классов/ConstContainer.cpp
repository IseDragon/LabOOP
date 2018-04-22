#include "Container.h"

container::container()
{
	kol = 0;
	n = 10;
	mas = new node*[n];
	for (int i = 0; i < n; i++)
	{
		mas[i] = NULL;
	}
}