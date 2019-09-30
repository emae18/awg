#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define mostrar(v) for(auto x : v) cout<<x<<" ";
#define dbg(x) cerr<<#x<<"->"<<(x)<<"\n";
using namespace std;
typedef vector<int> vi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        vi h(n);
        forin(i,n)cin>>h[i];
        bool ok=true;
        forin(i,n-1){
            int &h1=h[i];
            int &h2=h[i+1];
            int k2=((0LL>h2-k)?0LL:h2-k);
            m+=(h1-k2);
            //dbg(m);
            if(m<0){cout<<"NO\n";ok=false;break;}
        }
        if(ok)cout<<"YES\n";
    }
}
