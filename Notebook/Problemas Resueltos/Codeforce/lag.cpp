#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define mostrar(x,v) for(auto x: v)cout<<x<<" "
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        string a,b;
        cin>>a>>b;
        string ans="";
        if(b.size()>a.size()){
            int i;
            for( i=0;i<a.size();i++)
                ans+=a[i],ans+=b[i];
                while(i<b.size())ans+=b[i++];
        }else{
            int i;
            for( i=0;i<b.size();i++)
                ans+=a[i],ans+=b[i];
            while(i<a.size())ans+=a[i++];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
