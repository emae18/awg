#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
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

 vector<int> findGoodFight(vector <int> a, vector <int> b)
{
    vector<double> t(a.size());
    int m1;
    forin(i,a.size())
    {
        t[i]=a[i]/b[i];
        m1==t[0];if(i)
        {
            if(t[i]>t[i-1])m1=i;
        }
    }

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> v(n,0);
    vector<int> v1(n,0);
    forin(i,n)cin>>v[i];
    forin(i,n)cin>>v1[i];
    vector<int> r=findGoodFight(v,v1);
    forin(i,r.size())cout<<r[i]<<" ";
    return 0;
}
