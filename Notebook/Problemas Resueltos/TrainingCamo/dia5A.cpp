#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forn(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
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
 typedef vector< vector<int> > adyList;

//solve
int desc[1000];
int cont=1;
vector<vi> g; //EL GRAFO
 vector<bool> artR(1000); int artT;
 vector<int> artB(1000),artD(1000);
 void dfs(int ant, int v) {
 artB[v] = artT; artD[v] = artT++;
 forn(i, g[v].size()) if (artD[g[v][i]] == -1) {
 if (!v && i) artR[0]=true;
 int w = g[v][i]; dfs(v, w);
if (artB[w] < artD[v]) artB[v] <= artB[w];
 else if (artB[w] >= artD[v] && v) artR[v]=true;
 } else if (g[v][i] != ant) {
 artB[v] <= artD[g[v][i]];
 }
 }
 vector<bool> artPoints() {
 //dice true en los que son ptos de articulacion
 artR.clear(); artR.insert(artR.begin(), g.size(), false);
 if (!g.empty()) {
 artD.clear(); artD.insert(artD.begin(), g.size(), -1);
 artB.resize(g.size()); artT = 0; dfs(-1, 0);
 }
 return artR;
 }

int dfs_pa(int n)

{
    desc[n]=++cont;
    int min=cont;
    for(int i=1;i<=g[n].size();i++)
    {
        if(desc[i]==0)
        {
            int min_m=dfs_pa(i);
            if(min_m<min)
            {
                min=min_m;
            }
            /*if(min_m>=desc[i])
            {
                cout<<n<<"\n";
            }*/
        }else if(desc[i]<min)
        {
            min=desc[i];
        }
    }
    return min;
}
vector<int > bfs(int nodo)
{
    vector<int> d(g.size(),-1);
    queue<int> q;
    d[nodo]=0;
    q.push(nodo);
    while(!q.empty())
    {
        int x= q.front();
        q.pop();
        for(int y : g[x])
        {
            if(d[y]==-1)
            {
                d[y]=d[x]+1;
                q.push(y);
            }
        }
    }
    return d;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    memset(desc,0,sizeof(desc));
    cont=1;
    while(cin>>n)
    {
        if(n==-1)break;
        //vi v(n-1);
        g.resize(n+2);
        int aux;
        for(int i=1;i<=n-1;i++)
        {
            cin>>aux;
            g[aux].push_back(i+1);
            g[i+1].push_back(aux);
        }
        int i=0;
        /*for(auto x : m)
        {
            cout<<i++<<" -> ";
            for(auto c :x)
            {
                cout<<c<<" ";
            }
            cout<<"\n";
        }*/
        dfs(1,1);
        cout<<<<"\n";
    }
    return 0;
}
