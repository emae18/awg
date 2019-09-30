#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
vector<vi> g;
bool visited[150001];
vi a;
void dfs(int nodo)
{
    visited[nodo]=1;
    a.push_back(nodo);
    forin(i, g[nodo].size())
        if(!visited[g[nodo][i]])dfs(g[nodo][i]);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin>>q;
    while(q--)
    {
        vl v(3);
        forin(i,3)cin>>v[i];
        sort(all(v));
        ll alice=v[2];
        ll bob=v[1];
        bob+=v[0];
        ll aux=0,aux2;
        aux=((alice-bob));
        aux2=((bob-alice));
        if(alice>bob)
        {
            bob+=aux/2;
            alice-=(aux/2)+(aux%2);
        }else if(bob>alice)
        {
            alice+=aux2/2;
            bob-=(aux2/2)-(aux2%2);

        }
        cout<<alice<<"\n";
    }
    return 0;
}

