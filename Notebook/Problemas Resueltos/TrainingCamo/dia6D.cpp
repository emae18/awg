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
map<ll,vi> m;
vl v(100001);

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int lcm=0;

        for(int i=1;i<=n;i++)
        {
            //cout<<"termino->"<<i<<" "<<(i*n)/__gcd(i,n)<<"\n";
            lcm+=(i*n)/__gcd(i,n);
        }
        //si el gcd (son coprimos)==1
            // i*n
        // n%i==0 -> +=n
        // Suponer que todos son coprimos y restan luego los que no son coprimos
        //
        int lcm2=(((1*n)/__gcd(1,n))*((n*n)/__gcd(n,n)))*n/2;
        cout<<lcm<<"\n";

    }
    return 0;
}
