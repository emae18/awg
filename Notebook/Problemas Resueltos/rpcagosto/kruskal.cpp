#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef unsigned long long ll;
typedef vector<int > vi;
typedef vector<long long > vl;
vector<vector<pair<int,ll>> > g(100005);
vector<pair<ll,pair<int,int>> > gi;
vi p,ranks;
int cont=0;
vi visitado(100005);

    int n,m;
void dfs(int a)
{
    visitado[a]=1;
    cont++;
    for(auto x :g[a])
        if(!visitado[x.first])dfs(x.first);
}
/*void unionF(int xx)
{
    ranks.assign(xx,0);
    p.assign(xx,0);
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
/*void kruskal()
{
    sort(gi.begin(),gi.end());
    ll minc=0;
    unionF(n);
    forin(i,m)
    {
        pair<int,pair<int,int> > frente=gi[i];
        if(!mismo(frente.second.first,frente.second.second))
        {
            minc+=frente.first;
            unir(frente.second.first,frente.second.second);
        }
    }
    cout<<minc<<"\n";
}*/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    int a,b;ll c;
    forin(i,m)
    {
        cin>>a>>b>>c;
        g[a].push_back({b,c});
        g[b].push_back({a,c});
        gi.push_back({c,{a,b}});
    }
    dfs(1);
    if(cont!=n)cout<<"No es posible\n";
    else
    {
        kruskal();
    }
    return 0;
}
