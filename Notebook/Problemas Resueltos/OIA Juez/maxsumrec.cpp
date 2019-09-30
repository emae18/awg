#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;

void sumar(vector<int> k, set<int> &s)
{
    int sum=0;
    forin(i,k.size())sum+=k[i];
    //cout<<"\n";
    s.insert(sum);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> v[n];
    vector<vector<int> > sums(n+m);
    forin(i,n)
    {
        v[i].resize(m);
        forin(k,m)cin>>v[i][k];
    }
    forin(i,n)
    {
        forin(k,m)sums[i].push_back(v[i][k]);
    }
    forin(i,m)
        forin(j,n)sums[i+n].push_back(v[j][i]);
    set<int> s;
    forin(i,sums.size())
    {
        sumar(sums[i],s);
    }
    for(auto z : s)cout<<z<<" ";
    cout<<"\n";
    cout<<*s.rbegin()<<"\n";
    return 0;
}
