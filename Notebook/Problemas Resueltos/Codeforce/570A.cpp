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
    vi v;
    forin(i,1004)
    {
        int n=0,k=i;
        while(k/10!=0)
        {
            n+=k%10;
            k/=10;
        }
        n+=k%10;
        if(n%4==0)v.push_back(i);
    }
    //mostrar(x,v);cout<<"\n";
    int a;
    cin>>a;
    cout<<*lower_bound(all(v),a)<<"\n";
    return 0;
}
