#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
int n,m;
vector<int> p,ranks;

void unionF(int xx)
{
    ranks.assign(xx+4,0);
    p.assign(xx+4,0);
    forin(i,xx)p[i]=i;
}
int f(int i){
    return (p[i]==i)?i:(p[i]=f(p[i]));}

bool mismo(int i,int k){return f(i)==f(k);}

void unir(int i,int k){
    if(!mismo(i,k)){
        int x=f(i),y=f(k);
        if(ranks[x]>ranks[y])p[y]=x;
        else {
            p[x]=y;
            if(ranks[x]==ranks[y])ranks[y]++;
        }
    }
}
int kruskal(vector < pair < int,pair < int,int > > > edges, int n){
 // edges: lista de aristas en la forma {peso , {nodo1 , nodo2}}
 sort(edges.begin(),edges.end()); // ordena por peso
 unionF(n);
 int u = 0, res = 0;
 for(auto p: edges){
 int c = p.first, x = p.second.first, y = p.second.second;
 x = f(x); y = f(y);
 if(x == y)
 continue;
 res += c;
 u++;
 unir(x,y);
 if(u == n - 1) // completamos el arbol?
 return res;
 }
 return -1; // si llegamos hasta aca entonces no es conexo
 }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int a,b,c;
    vector<pair<int, pair<int,int>> > g;
    forin(i,m){
        cin>>a>>b>>c;
        g.push_back({c,{a,b}});
    }
    int l= kruskal(g,n);
    cout<<l<<"\n";
    return 0;
}
