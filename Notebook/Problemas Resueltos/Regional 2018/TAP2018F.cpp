#include <bits/stdc++.h>
using namespace std;

const int MAXNODOS = 1e5;
int altura[MAXNODOS+1];
int padre[MAXNODOS+1];
int producto[MAXNODOS+1];
int empresas[MAXNODOS+1];
vector< vector<int> > productos;
vector<int> productoLibre;
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
bool conectar(int a, int b)
{
    if(!comprobar(a, b))
    {
        a = find(a);
        b = find(b);
        if(producto[a] != producto[b] && productoLibre.size() == 0) return false;
        if(producto[a] == producto[b]) {
            for(int i = 0; i < productos[producto[a]].size(); i++){
                if(productos[producto[a]][i] == b)
                {
                    productos[producto[a]].erase(productos[producto[a]].begin()+i);

                }
            }
        }
        altura[a]+= (empresas[b] != empresas[a]);

        padre[b]= a;
        return true;
    }
    return false;
}


int main()
{
    int N, M;
    cin >> N >> M;
    productos.resize(M+1);
    init();
    for(int i = 1; i <= N; i++)
    {
        cin >> empresas[i];
        productos[empresas[i]].push_back(i);
    }

    for(int i = 1 ; i < M+1; i++) if(productos[i].size() == 0) productoLibre.push_back(i);

    int segmayor = 2;
    for(int i = 1; i <= N; i++)
    {
        for(int j = segmayor; j <= N; j++)
        {
            if(conectar(i,j))
            {
                segmayor++;
                break;
            }
        }

    }
    int ans = 0;
    for(int i = 1; i < N+1; i++)
    {
        ans = max(ans, altura[i]+1);
    }
    cout << ans << "\n";
}
