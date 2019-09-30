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
vector<vi> v;
vector<int > bfs(int nodo)
{
    vector<int> d(v.size(),-1);
    queue<int> q;
    d[nodo]=0;
    q.push(nodo);
    while(!q.empty())
    {
        int x= q.front();
        q.pop();
        for(int y : v[x])
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
    int n,m;
    cin>>n>>m;
    v.resize(n+1);
    int nodo,vec;
    int k=n;
    forin(i,m)
    {
        cin>>nodo>>vec;
        v[nodo].push_back(vec);
        v[vec].push_back(nodo);
    }
    vector<int> vaux=bfs(nodo);
    bool esConex=true;
    for(int i=1;i<=n;i++){
        if(vaux[i]==-1){
            esConex=false;
            break;
        }
    }
    if(!esConex){
        cout<<"NO\n";
    }else if(m==n-1){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}
