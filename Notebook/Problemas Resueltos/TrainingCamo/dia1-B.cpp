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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    float n,m;
    string a;
    while(cin>>m>>n)
    {
        if(m==-1 && n==-1)return 0;
        if(m==n){cout<<"********100%********\n";continue;}
        float k=m/n;
        int x= k*100;
        k=(k*20)+0.5 - ((k*20)<0);
        int k1=(int)k;
        forin(i,k1)a.push_back('*');
        forisn(i,k1,20)a.push_back('-');
        stringstream ss;
        ss<<x;
        string p=ss.str();
        forin(i,p.size())a[9+i]=p[i];
        a[9+p.size()]='%';
        cout<<a<<"\n";
        a="";
    }
    return 0;
}
