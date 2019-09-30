#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define fortin(i,n) for(int i=0;i<=n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";
#define desc greater<int>()
#define asc less<int>()
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
vi sg(30);
vi v;
void build(int nod,int l,int r)
{
    if(l==r)
        sg[nod]=v[l];
    else{
        build(2*nod,l,(r+l)/2);
        build(2*nod+1,((l+r)/2)+1,r);
        sg[nod]=sg[2*nod] +sg[2*nod+1];
    }
}
int sum(int n ,int start,int e,int l, int r) {
    if(l>e || r<start)return 0;
    if(start>=l && e<=r)return sg[n];
    int p1=sum(2*n,start,(start+e)/2,l,r);
    int p2=sum(2*n+1,(start+e)/2+1,e,l,r);
    if(p1==0)return p2;
    if(p2==0)return p1;
    return p1+p2;
}
int rqm(int n,int s, int e, int l, int r)
{
    if(l>e || r<s)return -1;
    if(s>=l && e<=r)return sg[n];
    int p1=sum(2*n,s,(s+e)/2,l,r);
    int p2=sum(2*n+1,(s+e)/2+1,e,l,r);
    if(p1==-1)return p2;
    if(p2==-1)return p1;
    return min(p1,p2);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);int n,l,a,b,r,q;
    cin>>n;
    v.resize(n);
    forin(i,n)cin>>v[i];
    build(1,0,n-1);string aux;
    for(auto x : sg)cout<<x<<" ";
    cin>>a>>b;
    cout<<"\n";
    cout<<sum(1,0,n-1,a,b)<<"\n";
    return 0;
}
