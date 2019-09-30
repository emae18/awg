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
typedef struct Trie *ptrie;
struct Trie{
    map<char,ptrie> edges;
    bool fin;
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string v[4];
    ptrie dic= new Trie;
    dic->fin = false;
    forin(i,4)cin>>v[i];
    forin(i,4)
    {
        forin(j,v[i].size())
        {
            if(!dic->edges.count(v[i][j]))
                dic->edges[v[i][j]]=new Trie;
            else{
                dic->edges[v[i][j]]->edges[v[]
            }
        }
    }
    //if(!dic->edges.count('c'))/
      //  dic->edges['c']=new Trie;
    /*for(auto x : dic->edges)
      cout<<x.first<<"\n";**/




    return 0;
}
