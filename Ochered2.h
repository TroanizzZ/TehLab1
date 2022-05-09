
#include "Ochered.h"
class Ochered2 :
    private Ochered
{
private:
    void ravn(ocher* temp);
public:
    void ravn();
    int* masobr = 0;
    int* mas;
    int count;
    Ochered2();
    ~Ochered2();
    int i;
    void razriv();
    void Fusion2(Ochered2* k, Ochered2* l);
    void Copy2(Ochered2* p);
    void add2(int a);
    void del2();
    void list2();
};
