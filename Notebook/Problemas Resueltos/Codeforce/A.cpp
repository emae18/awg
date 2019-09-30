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
    int n,m;int x,y;
    cin>>m>>n;
    if(n==m){
            cout<<0<<"\n";return 0;
    }
    if(n==0)
    {
        cout<<1<<"\n";return 0;
    }
    vi v(m,1);
    for(int i=0;i<=n;i+=2)
    {
        v[i]=0;
        n--;
        if(n>0 && i==n)
        {
            while(v[i]!=0)i++;
            i-=n;
        }
    }
    int cont=0;
    forin(i,v.size())
        if((v[i]==1 && v[i-1]==1)|| (v[i]==1  && v[i+1]==1)) continue;
        else cont++;
    cout<<((m%2==0 && m%2==0)?cont+1:cont)<<"\n";
    return 0;
}

