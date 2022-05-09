#pragma once
struct ocher
{
	int el=-1;
	struct ocher* prev=0;
};

class Ochered
{
private:

	int counter;
	ocher* och=0;
	int del(ocher* prev);
	void add(int n, ocher* prev);
	void list(ocher* prev);
	void copy(ocher* osn, ocher* cop);
	void fusion(Ochered* l3, ocher* prel);
public:

	void add(int n);
	void del();
	Ochered();
	~Ochered();
	void list();
	void copy(Ochered* cop);
	void fusion(Ochered* p, Ochered* l);
protected:
	int getcounter();
	ocher* getoch();
};

