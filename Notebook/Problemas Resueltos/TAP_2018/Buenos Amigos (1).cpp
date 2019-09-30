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
ll d,m,d1,n,d2;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>d>>m>>d1>>n>>d2;
    ll aux=d;
    if(d2<=d && d1<= d){cout<<-1<<"\n";return 0;}ll cont=0;
    if(d2>=d+d || d1>=d+d){cout<<1<<"\n";return 0;}

    cout<<cont<<"\n";
    return 0;
}
