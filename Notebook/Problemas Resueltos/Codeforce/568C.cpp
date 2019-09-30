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
vi v(10000);
vi sg(10005);
vi sum(1000);
void build(int id,int l,int r)
{
    if(l==r)sg[l]=v[l];
    else {
        build(2*id,l,(l+r)/2);
        build(2*id+1,(l+r/2)+1,r);
        sg[id]=max(sg[2*id],sg[2*id+1]);
    }
}
int rmq(int id,int s,int e,int l,int r)
{
    if(l<s || r>e)return -1;
}
int idM(int n,si s)
{
    int may=0;
    forin(i,n)
    {
        if(may<=v[i] && s.find(i)==s.end()){may=v[i];s.insert(i);}
    }
    return may;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    forin(i,n)cin>>v[i];
    //build(1,0,n-1);
    forin(x,n)
    {
        int sum=0;
        int cont=0;
        forin(i,x+1)
        {
            set<int> s;
            sum+=v[i];
            while(sum>m)
            {
                    sum-=idM(i,s);
                    cont++;
            }
        }
    cout<<cont<<" ";
    }

    return 0;
}
