#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,q;
    cin>>n>>m>>q;
    int v[n+10][n+10];
    //vector<vector<int> > v(n+1,vector<int>(n+1));
    while(m--){
        int k,a,b;
        cin>>k>>a>>b;
        for(int i=1;i<k+1;i++){
            if(v[a+i][b+i]==0){
                v[a+i][b+i]=a+i;
                v[b+i][a+i]=b+i;
            }else{
                v[a+i][b+i]=0;
                v[b+i][a+i]=0;
            }
            //if(a+i==a+k-1 || b+i==b+k-1)break;
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
