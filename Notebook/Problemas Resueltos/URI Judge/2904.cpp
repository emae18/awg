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
#define pi 3.14159265358979323846
int as(int x,vi k){
    int a=0;
    forin(i,x)a+=k[i];
    return a;
}
vector<ll> v;
vector<ll> sg;
void build(int n,int l,int r)
{
    if(l==r)sg[n]=v[l];
    else{
        build(n*2,l,(l+r)/2);
        build(n*2+1,(l+r)/2+1,r);
        sg[n]=sg[n*2]+sg[n*2+1];
    }
}
ll suma(int n,int s,int e,int l,int r)
{
    if(l>e || r<s)return 0;
    if(s>=l && e<=r) return sg[n];

        ll p1=suma(2*n,s,(e+s)/2,l,r);
        ll p2=suma(2*n+1,(e+s)/2+1,e,l,r);
        //if(p1==-1)return p2;
        //if(p2==-1)return p1;
        return p1+p2;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    v.resize(n);
    sg.resize(4*n);
    int sum=0;
    forin(i,n){cin>>v[i];sum+=v[i];}
    build(1,0,n-1);
    //cout<<sum<<"\n";
    //|| v[i]/r==(v1[i]/r)+v1[i+1]/r
    double r=sum/(2*pi);
    double diam=2*r;
    //cout<<r<<"\n"<<diam;
    int x=0;
    forin(i,n){
        forisn(j,i+2,n)
          {
            if(v[i]/r==v[j]/r && suma(1,0,n-1,i+1,j-1)/r
               ==(suma(1,0,n-1,j+1,n-1)+suma(1,0,n-1,0,i-1))/r
               || (v[x]+v[x+1])/r==v[j]/r && suma(1,0,n-1,x+2,j-1)/r
               ==(suma(1,0,n-1,j+1,n-1)+suma(1,0,n-1,0,i-1))/r)
            {
                    cout<<"Y\n";
                    return 0;
            }
          }
          x+=2;
    }
    cout<<"N\n";
    return 0;
}
