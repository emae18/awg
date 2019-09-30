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
vi dfs_num;
int c=0;
void dfs(map<int,vi> G, int u)
{
    dfs_num[u] = 1;c++;
    for (int i = 0; i<G[u].size(); i++)
    {
      //  cout <<"vecino: " <<i<<"/"<<G[u].size()-1 << endl;
        if(dfs_num[G[u][i]]==0)
        {

        //    cout << u << ","<<G[u][i]<< endl;
            dfs(G, G[u][i]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,raiz,V,A,nodo,vec;
    cin >>n;
    while(n--)
    {
        cin>>raiz>>V>>A;
        map<int,vi> G;
        dfs_num.resize(V);
        while(A--)
        {
            cin>>nodo>>vec;
            G[nodo].push_back(vec);
            G[vec].push_back(nodo);
        }
        dfs(G,raiz);
        dfs_num.clear();
        cout<<--c*2<<"\n";
        c=0;
    }
    return 0;
}
