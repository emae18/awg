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
        for(int i=0;i<k;i++){
            if(v[a+i][b+i]==0){
                v[a+i][b+i]=a+i;
                v[b+i][a+i]=b+i;
            }else{
                v[a+i][b+i]=0;
                v[b+i][a+i]=0;
            }
        }
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        if(v[a][b]!=0)cout<<"SI\n";
        else cout<<"NO\n";
    }
    return 0;
}
