#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


int v[10010][10010];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    //vector<vector<int> > v(n+1,vector<int>(n+1));
    while(m--){
        int k,a,b;
        cin>>k>>a>>b;
            v[a][b]^=1;
            v[b][a]^=1;
            v[a+k][b+k]^=1;
            v[b+k][a+k]^=1;
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        if(!v[a][b])cout<<"NO\n";
        else cout<<"SI\n";
    }
    return 0;
}
