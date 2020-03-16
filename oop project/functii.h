#include <iostream>
#include "my_class.h"
#include "stack_class.h"

using namespace std;
using namespace N;
using namespace M;
//functii.h
namespace F
{
    void citire(Stiva st, int n)
    {
        element* x;
        cin>>n;
        for (int i=1;i<=n;++i)
        {
            cin>>x;
            Stiva::push(st,x);
        }
    }

    void afisare(Stiva st, int n)
    {
        element* x;
        for (int i=1;i<=n;++i)
        {
            x=Stiva::pop(st);
            cout<<x;
        }
    }

    void golire(Stiva st, int n)
    {
        element* x;
        while(n!=0)
        {
            x=Stiva::pop(st)
        }
    }

    void copiere(Stiva st1, Stiva &st2, int n)
    {
        element* x;
        Stiva st3;
        for(int i=1;i<=n;++i)
        {
            x=Stiva::pop(st1);
            Stiva::push(st3,x);
        }

        for (int i=1;i<=n;++i)
        {
            x=Stiva::pop(st3);
            Stiva::push(st2,x)
        }
    }

    void inversare(Stiva st1, Stiva &st2, int n)
    {
        element* x;
        for (int i=1;i<=n;++i)
        {
            x=Stiva::pop(st1);
            Stiva::push(st2,x);
        }
    }

}
