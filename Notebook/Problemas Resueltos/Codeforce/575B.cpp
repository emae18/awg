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
    int n,k,aux;
    while(q--)
    {
        cin>>n>>k;
        vector<int> imp;
        forin(i,n){
            cin>>aux;
            if(aux&2!=0)
                imp.push_back(i+1);
        }
        if(imp.size()<k || imp.size()%k!=0 && k%2!=0)
        {
            cout<<"NO\n";
        }else{

            cout<<"\n";
        }

    }
    return 0;
}

