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
int sum(int a,int b)
{
    int suma=0;
    forisn(i,a,b+1)suma+=i;
    return suma;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,x;
    cin>>m;

    cout<<m<<" "<<x<<" "<<n<<"\n";
    return 0;
}
