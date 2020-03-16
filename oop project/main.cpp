#include <iostream>
#include "my_class.h"
#include "stack_class.h"
#include "functii.h"
#define SIZE 5

using namespace M;
using namespace N;
using namespace F;
using namespace std;

int main()
{
    Stiva s;
    int n;

    citire(s,n);

    afisare(s,n);

    Stiva s1,s2;
    inversare(s,s1,n);

    afisare(s1,n);

    afisare(s,n);

    copiere(s,s2,n);

    afisare(s2,n);

    golire(s2,n);

    return 0;
}
