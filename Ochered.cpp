#include <iostream>
#include "Ochered.h"
#include <Windows.h>

Ochered::Ochered()
{
	counter = 0;
	och = new ocher;
}

Ochered::~Ochered()
{
	while (counter != 0)
	{
		ocher* p = och;
		ocher* k = och;
		for (int i = 0; i < counter; i++)
		{
			if (p->prev == 0) {
				delete p;
				k->prev = 0;
				counter--;
				break;
			}
			k = p;
			p = p->prev;
		}
	}
}

void Ochered::add(int n)
{
	counter++;
	if (och->el == -1)
	{
		och->el = n;
		return;
	}
	else
	{
		int p = och->el;
		och->el = n;
		if (och->prev == 0)
		{
			och->prev = new ocher;
		}
		add(p, och->prev);
	}
}

void Ochered::add(int n, ocher* prel)
{
	if (prel->el == -1)
	{
		prel->el = n;
		return;
	}
	else
	{
		int p = prel->el;
		prel->el = n;
		if (prel->prev == 0)
		{
			prel->prev = new ocher;
		}
		add(p, prel->prev);
	}
}

void Ochered::list()
{
	if (och->el != -1)
	{
		std::cout << och->el << std::endl;
	}
	if (och->prev != 0)
	{
		list(och->prev);
	}
	return;
}

void Ochered::list(ocher* prel)
{
	if (prel->el != -1)
	{
		std::cout << prel->el << std::endl;
	}
	if (prel->prev != 0)
	{
		list(prel->prev);
	}
	return;
}

void Ochered::del()
{
	if (counter == 0)
	{
		std::cout << "No queue" << std::endl;
		return;
	}
	counter--;
	if (och->el == -1)
	{
		return;
	}
	if (och->prev == 0)
	{
		och->el = -1;
		return;
	}
	else
	{
		if (del(och->prev)) {
			delete och->prev;
			och->prev = 0;
		}
		return;
	}
}

int Ochered::del(ocher* prel)
{
	if (prel->el == -1)
	{
		return 0;
	}
	if (prel->prev == 0)
	{
		prel->el = -1;
		return 1;
	}
	else
	{
		if (del(prel->prev)) {
			delete prel->prev;
			prel->prev = 0;
		}
		return 0;
	}
}

void Ochered::copy(Ochered* cop)
{
	if (counter == 0)
	{
		std::cout << "No queue" << std::endl;
		return;
	}
	cop->counter = counter;
	if ((och->el != -1) && (och->prev != 0))
	{
		cop->och->el = och->el;
		cop->och->prev = new ocher;
		copy(och->prev, cop->och->prev);
	}
	else if ((och->el != -1) && (och->prev == 0))
	{
		cop->och->el = och->el;
	}
	return;
}

void Ochered::copy(ocher* osn, ocher* cop)
{
	if ((osn->el != -1) && (osn->prev != 0))
	{
		cop->el = osn->el;
		cop->prev = new ocher;
		copy(osn->prev, cop->prev);
	}
	else if ((osn->el != -1) && (osn->prev == 0))
	{
		cop->el = osn->el;
	}
	return;
}


void Ochered::fusion(Ochered* p, Ochered* l)
{
	if ((counter == 0)||(p->counter==0))
	{
		std::cout << "No queue" << std::endl;
		return;
	}
	copy(l);

	if (p->och->prev == 0)
	{
		if (p->och->el == -1)
		{
			return;
		}
		else
		{
			l->add(p->och->el);
		}
		return;
	}
	else
	{
		fusion(l, p->och->prev);
		l->add(p->och -> el);
	}
	return;
}

void Ochered::fusion(Ochered* l3, ocher* p)
{
	if (p->prev == 0)
	{
		if (p->el == -1)
		{
			return;
		}
		else
		{
			l3->add(p->el);
		}
		return;
	}
	else
	{
		fusion(l3, p->prev);
		l3->add(p->el);
	}
}

ocher* Ochered::getoch()
{
	return och;
}

int Ochered::getcounter()
{
	return counter;
}


