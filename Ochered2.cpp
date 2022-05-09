
#include "Ochered2.h"
#include <iostream>

Ochered2::Ochered2()
{

}

Ochered2::~Ochered2()
{
	delete[] masobr;
	delete[] mas;
}

void Ochered2::ravn()
{
	i = 0;
	masobr = new int[getcounter()];
	ocher* tmp = getoch();
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

void Ochered2::ravn(ocher* temp)
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

void Ochered2::razriv()
{
	mas = new int[getcounter()];
	int razr = 0;
	int count = getcounter();
	if (count < 3)
	{
		std::cout << "There are not enough elements for the range to appear" << std::endl;
		return;
	}
	for (int i = 0; i < count; i++)
	{
		mas[i] = masobr[count - 1 - i];
	}
	int max = mas[1], min = mas[1];
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
	std::cout << "The range is  " << razr << std::endl;
	return;
}

void Ochered2::Fusion2(Ochered2* k, Ochered2* l)
{
	return fusion(k, l);
}

void Ochered2::Copy2(Ochered2* p)
{
	return copy(p);
}

void Ochered2::add2(int a)
{
	return add(a);
}

void Ochered2::del2()
{
	return del();
}

void Ochered2::list2()
{
	return list();
}



