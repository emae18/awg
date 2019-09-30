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
    vi x(1001,0),y(1001,0);int a,b;
    forin(i,3)
    {
        cin>>a>>b;
        x[a]++;
        y[b]++;
    }
    int ix=distance(x.begin(),find(x.begin(),x.end(),1));
    int iy=distance(y.begin(),find(y.begin(),y.end(),1));
    cout<<ix<<" "<<iy<<"\n";

    return 0;
}
