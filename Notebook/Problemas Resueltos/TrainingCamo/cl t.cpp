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
vector<char> v(100001);
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    char c;
    int rp=0,bp=0,rip=0,pib=0;
    forin(i,n)
    {
        cin>>c;
        if(c=='r' && i%2==0)rp++;
        if(c=='b' && i%2==0)bp++;
        if(c=='r' && i%2!=0)rip++;
        if(c=='b' && i%2!=0)pib++;
    }
    cout<<min(max(rip,bp),max(rp,pib))<<"\n";
    return 0;
}
