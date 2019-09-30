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
    int q;
    cin>>q;ll k,n,a,b;
    while(q--)
    {
        cin>>k>>n>>a>>b;
        ll m=n,k1=k,aux=0;
        if(n*a<k)cout<<n<<"\n";
        else if(n*a==k && k-((n-1)*a)>b)cout<<n-1<<"\n";
        else if(n*a>k)
        {
            while(k1<=m*a){
                m--;
                aux++;
            }
            if(aux*b<(k-(m*a))){cout<<m<<"\n";
            else if(b>(k-(m*a)) && b*n<k)cout<<0<<"\n";

        }
    }
    return 0;
}
