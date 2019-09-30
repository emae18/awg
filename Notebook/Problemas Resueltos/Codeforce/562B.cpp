#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
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
    int n,m;
    cin>>n>>m;
    vector<pii> v(m);
    vector<pii> x(n+1);
    vector<pii> y(n+1);
    multiset<int> msx,msy;
    forin(i,m)
    {cin>>v[i].first>>v[i].second;
        msx.insert(v[i].first);
        msy.insert(v[i].second);
        x[v[i].first].first++;
        x[v[i].first].second=v[i].first;
        y[v[i].second].first++;
        y[v[i].second].second=v[i].second;
    }
    sort(all(x),greater<pii>());
    sort(all(y),greater<pii>());cout<<"\n";
    for(auto a : x)
    {
        cout<<a.first<<" "<<a.second<<"\n";
    }
    cout<<"\n";
    for(auto a : y)
    {
        cout<<a.first<<" "<<a.second<<"\n";
    }

    return 0;
}
