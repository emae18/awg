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
map<ll,vector<ll> > m;
unsigned long long fact(ll m)
{
    if(m==2) return 2;
    return m*fact(m-1);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;int aux,aq;
    forin(i,n-1)
    {
        cin>>aux>>aq;
        m[aux].push_back(aq);
    }ll ans=0;
    if(m.size()==1){
        cout<<fact(n)%998244353<<"\n";
        return 0;
    }
    ll k=0;
    while(m.size()!=1)
    {
        k+=m.rbegin()->first*m.rbegin()->second.size();
        m.erase(m.rbegin()->first);
    }
    cout<<((fact(n)/k)+n)%998244353 <<"\n";
    return 0;
}
