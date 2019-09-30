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
map<ll,vi> m;
vl v(100001);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    forin(i,n)
    {
        cin>>v[i];
        m[v[i]].push_back(i);
    }
    ll mini=1e10;
    map<ll,vi>::iterator it=m.begin();
    for(int i=1;i<it->second.size();i++)
    {
        mini=min(mini,(ll)abs(it->second[i]-it->second[i-1]));
    }
    cout<<mini<<"\n";
    return 0;
}
