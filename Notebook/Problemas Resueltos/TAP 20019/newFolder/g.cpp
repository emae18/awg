#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define mostrar(x,v) for(auto x :v)cout<<x<<" "
using namespace std;
typedef long long ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int mio;
    cin>>mio;
    vector<int> v(n-1);
    forin(i,n-1)cin>>v[i];
    sort(v.begin(),v.end());
    int bandos=v.size();
    forin(i,n-1){
        mio-=bandos--*v[i]-1;
        if(mio<1){
            cout<<"NO\n";
            return 0;
        }
    }
    if(mio<1)cout<<"NO\n";
    else cout<<"SI\n";
    return 0;
}
