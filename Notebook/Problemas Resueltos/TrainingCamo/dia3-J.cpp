#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
//loops and more
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
//solve

int prod(int z)
{
    int kk=1;
    for(int i=3;i<=z+3;i++)kk*=i;
    return kk;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<double> v(n);
    forin(i,n){
        cin>>v[i];
        double ans=0;
        int den=1;
        for(int z=3;z<v[i]+3;z++)den*=z;
        int num=0;
        cout<<den<<"\n";
        for(int z=2;z<v[i]+2;z++)
            num+=(prod(v[i])/(z+2));
        cout<<num<<"\n";
        ans=num/(double)den;
        cout<<ans<<"\n";
        cout<<fixed<<setprecision(11)<<ans/v[i]<<"\n";
    }
    return 0;
}
