#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
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
    int n;
    cin>>n;
    vector<ll> v(n);
    map<ll,vi> p,ip;
    forin(i,n)
    {
        cin>>v[i];
        if(v[i]%2==0)p[v[i]].push_back(i);
        else ip[v[i]].push_back(i);
    }
    while(p.size()!=0 && ip.size()!=0)
    {
        swap(v[p.rbegin()->second.back()],v[ip.begin()->second.back()]);
        p.rbegin()->second.pop_back();
        ip.begin()->second.pop_back();
        if(p.rbegin()->second.size()==0)
        p.erase(p.begin()->first);
        if(ip.begin()->second.size()==0)
        ip.erase(ip.begin()->first);
    }
    mostrar(x,v);cout<<"\n";
    return 0;
}
