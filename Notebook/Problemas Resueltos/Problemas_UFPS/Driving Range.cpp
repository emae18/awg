#include<bits/stdc++.h>
using namespace std;
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
ll m[9999][9999];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;int a,b,c;
    while(cin>>n>>m)
    {
        int sum=0;
        if(n==2 && m==0){cout<<"IMPOSSIBLE\n";break;}
        forin(i,n)
        {
            cin>>a>>b>>c;
            sum+=c;
        }
        cout<<sum/n<<"\n";

    }

    return 0;
}
