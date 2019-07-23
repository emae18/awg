#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxN = 3001;

struct tarista
{
    int destino;
    ll tiempo;
    tarista(int a = 0, ll b = 0): destino(a), tiempo(b){}
};
struct tbestDist
{
    int predecesor;
    ll tiempo;
    tbestDist(int predecesor = -1, ll tiempo = -1): predecesor(predecesor), tiempo(tiempo){}
};
vector<tarista> vecinos[maxN]; // n NODOS
vector<tbestDist> allDists(maxN, tbestDist(-1, -1));

bool condicionAgregarArista(int nodo, int anterior, ll tiempo)
{
    if(allDists[nodo].tiempo == -1)
    {
        allDists[nodo].tiempo = tiempo;
        allDists[nodo].predecesor = anterior;
        return true;
    }
    if(allDists[nodo].tiempo > tiempo)
    {
        allDists[nodo].tiempo = tiempo;
        allDists[nodo].predecesor = anterior;
        return true;
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a, b, inicio, destinoFinal;
    ll c;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        vecinos[a].push_back(tarista(b, c));
    }
    cin >> inicio >> destinoFinal;
    queue< pair<int, ll> > recorrer;
    allDists[inicio].tiempo = 0; //ya que en esta implementación se considera el tiempo inicial como cero, se le toma este tiempo.
    allDists[inicio].predecesor = inicio;
    recorrer.push({inicio, 0});
    while(!recorrer.empty())
    {
        int actual = recorrer.front().first;
        ll tiempoActual = recorrer.front().second;
        recorrer.pop();
        if(actual == destinoFinal) continue;
        for(auto e : vecinos[actual])
        {
            int next = e.destino;
            ll time  = e.tiempo+tiempoActual;
            if(condicionAgregarArista(next, actual, time))
            {
                recorrer.push({next, time});
            }
        }
    }
    cout << "Mejor tiempo a destino: " << allDists[destinoFinal].tiempo << "\n";

    /* BACKTRACKING */
    stack<int> recorrido;
    int pivote = destinoFinal;
    while(pivote != inicio)
    {
        recorrido.push(pivote);
        pivote = allDists[pivote].predecesor;
    }
    recorrido.push(pivote);
    cout << "Recorrido: ";
    while(!recorrido.empty())
    {
        cout << recorrido.top() << ((recorrido.top() != destinoFinal) ? "->" : "\n");
        recorrido.pop();
    }
//    cout << "\n";
    return 0;
}
