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
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi v(n);
    vi v1(n);
    int sum=0;
    forin(i,n){cin>>v[i];sum+=v[i];}
    //cout<<sum<<"\n";
    //reverse(all(v1));
    double r=sum/(2*pi);
    vector<double> angle;
    for(auto x : v)
        angle.push_back(sum/r);

    forin(i,n/2)
    {
        if(v[i]/r==v1[i]/r){cout<<"Y\n";return 0;}
    }
    cout<<"N\n";
    return 0;
}
