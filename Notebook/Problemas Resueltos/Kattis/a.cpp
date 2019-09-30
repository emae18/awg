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
    vi v(n/2);
    vi v1(n/2);int sum=0;
    forin(i,n/2){cin>>v[i];sum+=v[i];}
    forisn(i,n/2,n){cin>>v1[i-n/2];sum+=v1[i-n/2];}
    vi vsu;
    for(auto x : v)vsu.push_back(x);
    for(auto x : v1)vsu.push_back(x);
    vi sumP;
    sumP.push_back(v[0]);
    for(int i=1;i<vsu.size();i++)
        sumP.push_back(vsu[i]+*sumP.rbegin());
    int mP=sum/2;
    //cout<<sum<<"\n";
  //  reverse(all(v1));
    int cont =0;


    return 0;
}
