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
    int v[6]={1,1,2,2,2,8};
    int e[6];
    forin(i,6)
    {
        cin>>e[i];
        if(e[i]>v[i] || e[i]<v[i])cout<<v[i]-e[i]<<" ";
        else cout<<"0 ";
    }
    cout<<"\n";
    return 0;
}
