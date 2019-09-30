#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
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
bool isOk(int x,int c)
{
    if(x==c)return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int l,d,c;
    cin>>l>>d>>c;
    int m=l,k=l;
    int n=d;
    bool enc=true;
    while(l<=d && enc)
    {
        ll sum=0;
        while(m!=0){
            sum+=(m%10);
            m/=10;
        }
        if(sum!=c)l++;else enc=false;
        m=l;
    }
    cout<<l<<"\n";enc=true;
    while(d>=k && enc)
    {
        ll sum=0;
        while(n!=0){
            sum+=(n%10);
            n/=10;
        }
        if(sum!=c)d--;else enc=false;
        n=d;
    }
    cout<<d<<"\n";
    return 0;
}
