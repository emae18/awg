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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int dan=a,vlad=b;
    bool band=false;
    while(dan!=x && vlad!=y)
    {
        dan++;vlad--;
        if(vlad<1)vlad+=n;
        if(dan>n)dan-=n;
        if(dan==vlad){
            band=true;
            break;
        }
    }
    cout<<((band)?"YES\n":"NO\n");

    return 0;
}
