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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;string a,b;
    cin>>a;
    cin>>b;
    vi v(n,0);
    vi q(n,0);int qc=0,vc=0;
    forin(i,n)v[i]=a[i]-'0';
    forin(i,n)
    {
        q[i]=b[i]-'0';
        if(q[i]!=v[i])
        {
            if(find(v.begin(),v.end(),q[i])!=v.end())
                qc++;
            else vc++;
        }
    }
    cout<<vc<<"\n"<<qc<<"\n";
    return 0;
}
