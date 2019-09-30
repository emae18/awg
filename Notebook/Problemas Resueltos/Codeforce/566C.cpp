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
set<char> voc={'a','e','i','o','u'};
pii countVocals(string a)
{
    pii p={0,-1};
    if(a.find('a')!=string::npos)
    {
        p.first++;p.second=max(p.second,distance(a.begin(),a.find('a')));
    }
    if(a.find('e')!=string::npos)
    {
        p.first++;p.second=max(p.second,distance(a.begin(),a.find('a')));
    }
    if(a.find('i')!=string::npos)
    {
        p.first++;p.second=max(p.second,distance(a.begin(),a.find('a')));
    }
    if(a.find('u')!=string::npos)
    {
        p.first++;p.second=max(p.second,distance(a.begin(),a.find('a')));
    }
    if(a.find('u')!=string::npos)
    {
        p.first++;p.second=max(p.second,distance(a.begin(),a.find('a')));
    }
}
struct comp {
    bool operator()(const pii& a, const pii& b) const {
        return a.first >= b.first;
    }
};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string aux;
    map<pii,string,comp> m;
    while(n--)
    {
        cin>>aux;
        m[aux]=countVocals(aux);
    }

    return 0;
}
