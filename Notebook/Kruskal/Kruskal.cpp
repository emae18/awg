#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXNODOS = 1e5;
const int MAXARISTAS = 2e5;
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

struct tArista
{
    int a, b;
    ll c;
    tArista(int a = 0, int b = 0, ll c = 0): a(a), b(b), c(c){}
    bool operator <(const tArista &b) const
    {
        return c < b.c;
    }
};
struct grafo
{
    uf componentes; //se pueden comprobar las diferentes componentes conexas que tenga un determinado grafo usando union find
    tArista aristas[MAXARISTAS];
    int nodosConectados = 0;
    ll sum = 0;
    void cargarAristas(int m)
    {
        int a, b;
        ll c;
        for(int i = 0; i < m; i++)
        {
            cin >> a >> b >> c;
            aristas[i] = tArista(a, b, c);
        }
        ordenarAristas(m);
    }
    void ordenarAristas(int m)
    {
        sort(aristas, aristas+m);
    }

    bool arbolCompleto(int n) // solo comprueba si TODAS las aristas quedaron bien conectadas al ejecutarse el AGM
    {
        return (n-1 == nodosConectados);
    }

    void conectarAristas(int m)
    {

        for(int i = 0; i < m; i++)
        {
            if(!componentes.comprobar(aristas[i].a, aristas[i].b))
            {
                componentes.conectar(aristas[i].a, aristas[i].b);
                nodosConectados++;
                sum+= aristas[i].c;
            }
        }
    }
    void resolver()
    {
        int n, m;
        int a, b;
        ll c;
        componentes.init();
        cin >> n >> m;
        cargarAristas(m);
        conectarAristas(m);
        if(arbolCompleto(n)) cout << sum;
        else cout << "NO SE CONECTARON TODOS LOS NODOS";
    }

};

int main()
{
    grafo g;
    g.resolver();
}


