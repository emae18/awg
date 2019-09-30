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
bool esPerf(int n)
{
    vi div;
    forisn(i,1,n)
        if(n%i==0)div.push_back(i);
    int sum=0;
    forin(i,div.size())
        sum+=div[i];
    if(sum==n)return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    vi v;
    cin>>n;
    for(int i=6;i<=n;i++)
    {
        if(esPerf(i))cout<<i<<"\n";
    }
    return 0;
}
