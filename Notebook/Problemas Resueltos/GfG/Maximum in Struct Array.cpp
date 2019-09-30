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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    si s;
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        n*=2;
        vi f(n,0);
        vi p(n,0);
        forin(i,n/2){cin>>f[i]>>p[i];s.insert((f[i]*12)+p[i]);}
        cout<<*s.rbegin()<<"\n";
        s.clear();
    }

    return 0;
}
