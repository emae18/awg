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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll d;ll v[3];
    forin(i,3)cin>>v[i];
    cin>>d;
    sort(v,v+3);
    ll ans=0;
    while(abs(v[0]-v[1])<d || abs(v[1]-v[2])<d || abs(v[0]-v[2])<d )
    {
        if(abs(v[1]-v[0])<d){ans+=d-abs(v[1]-v[0]);v[0]-=ans;}
        if(abs(v[1]-v[2])<d){ans+=d-abs(v[1]-v[2]);v[2]+=ans;}
    }
    cout<<ans<<"\n";





    return 0;
}
