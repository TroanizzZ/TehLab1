#include "Ochered1.h"
#include <iostream>

Ochered1::Ochered1()
{

}

Ochered1::~Ochered1()
{
	delete[] masobr;
	delete[] mas;
}

void Ochered1::ravn()
{
	i = 0;
	masobr = new int[getcounter()];
    ocher* tmp= getoch();
	if (tmp->el != -1)
	{
		masobr[i] = tmp->el;
		i++;
	}
	if (tmp->prev != 0)
	{
		ravn(tmp->prev);
	}
	return;
}

void Ochered1::ravn(ocher* temp)
{
	if (temp->el != -1)
	{
		masobr[i] = temp->el;
        i++;
	}
	if (temp->prev != 0)
	{
		ravn(temp->prev);
	}
	return;
}

void Ochered1::razriv()
{
	mas = new int[getcounter()];
	int razr = 0;
	int count = getcounter();
	if (count < 3)
	{
		std::cout << "There are not enough elements for the range to appear " << std::endl;
		return;
	}
	for (int i = 0; i < count; i++)
	{
		mas[i] = masobr[count - 1 - i];
	}
	int max=mas[1], min=mas[1];
	for (int i = 0; i < count; i++)
	{
		if ((i % 2) == 1)
		{
			if (max < mas[i])
			{
				max = mas[i];
			}
			if (min > mas[i])
			{
				min = mas[i];
			}
		}
	}
		razr = max - min;
		std::cout <<"The range is  "<< razr << std::endl;
		return;
}

