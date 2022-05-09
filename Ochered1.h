#pragma once
#include "Ochered.h"
class Ochered1 :
    public Ochered
{
private:
    void ravn(ocher* temp);
public:
    void ravn();
    int* masobr=0;
    int* mas;
    int count;
    Ochered1();
    ~Ochered1();
    int i;
    void razriv();
};

