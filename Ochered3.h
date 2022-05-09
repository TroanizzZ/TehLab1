#pragma once
#include "Ochered.h"
class Ochered3 :
    protected Ochered
{
private:
    void ravn(ocher* temp);
public:
    void ravn();
    int* masobr = 0;
    int* mas;
    int count;
    Ochered3();
    ~Ochered3();
    int i;
    void razriv();
    void Fusion3(Ochered3* k, Ochered3* l);
    void Copy3(Ochered3* p);
    void add3(int a);
    void del3();
    void list3();
};

