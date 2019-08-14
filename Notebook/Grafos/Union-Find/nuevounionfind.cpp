#include <bits/stdc++.h>
using namespace std;
const int MAXNODOS = 1e6;
struct uf
{

    int altura[MAXNODOS+1];
    int padre[MAXNODOS+1];
    void init()
    {
        for(int i = 1; i <= MAXNODOS; i++)
        {
            altura[i] = 1;
            padre[i] = i;

        }

    }
    int find(int a)
    {
        int retValue = padre[a];
        if(padre[a] != a)
        {
            retValue = find(padre[a]);
        }
        padre[a] = retValue;
        //cout << "Actualizo el padre de (" << a << ") a (" << retValue << ")\n";
        return retValue;
    }

    bool comprobar(int a, int b)
    {
       return find(a) == find(b);
    }
    void conectar(int a, int b)
    {
        if(!comprobar(a, b))
        {
            a = find(a);
            b = find(b);
            if(altura[b] > altura[a])
            {
                swap(a, b);
            }
            padre[b]= a;
            altura[a] += altura[b];
        }

    }
};
