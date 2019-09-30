#include <bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

vector<int,vector<pair<int,int>> > g;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    int nodo,hijo,costo;
    forin(i,m){
        cin>>nodo>>hijo>>costo;
        g[nodo].push_back({hijo,costo});
    }



    return 0;
}
