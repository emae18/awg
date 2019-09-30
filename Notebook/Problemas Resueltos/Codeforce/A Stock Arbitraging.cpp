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
bool primo(int x)
{
    for(int p=2;p*p<=x;p++)if(x%p==0)return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,r;
    cin>>n>>m>>r;
    vi morning(n,0);
    vi night(m,0);
    forin(i,n)cin>>morning[i];
    forin(i,n)cin>>night[i];


    return 0;
}
