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
    vi v(3,0);string abc;
    forin(i,3)cin>>v[i];cin>>abc;
    sort(v.begin(),v.end());
    forin(i,abc.size())
    {
        if(abc[i]=='A')cout<<v[0]<<" ";
        if(abc[i]=='B')cout<<v[1]<<" ";
        if(abc[i]=='C')cout<<v[2]<<" ";
    }
    cout<<"\n";

    return 0;
}
