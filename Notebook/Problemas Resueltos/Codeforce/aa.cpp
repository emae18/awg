
#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> ii;
const int MAXN=10000;
int uf[MAXN];
 void init_uf(int n){
 fill(uf, uf+n, -1);
 }
 int find(int x){
 if(uf[x] < 0)
 return x;
return uf[x] = find(uf[x]);
 }
 void join(int x, int y){ // union es palabra reservada de C++ :(
 x = find(x); y = find(y);
if(x == y)
 return;
 if(uf[x] > uf[y])
 swap(x,y);
 uf[x] += uf[y];
 uf[y] = x;
}
int kruskal(vector < pair < int,pair < int,int > > > edges, int n){
// edges: lista de aristas en la forma {peso , {nodo1 , nodo2}}
 sort(edges.begin(),edges.end()); // ordena por peso
 init_uf(n);
 int u = 0, res = 0;
 for(auto p: edges){
 int c = p.first, x = p.second.first, y = p.second.second;
 x = find(x); y = find(y);
 if(x == y)
 continue;
 res += c;
 u++;
 join(x,y);
 if(u == n - 1) // completamos el arbol?
 return res;
 }
 return -1; // si llegamos hasta aca entonces no es conexo
 }
int main()
{
    int v,e,a,b,c;
    cin>>v>>e;
    vector<pair<int,ii> > lista(v);
    forin(i,e)
    {
        cin>>a>>b>>c;
        lista.push_back({a,{b,c}});
        lista.push_back({b,{a,c}});
    }
    cout<<kruskal(lista,e);
    return 0;
}
