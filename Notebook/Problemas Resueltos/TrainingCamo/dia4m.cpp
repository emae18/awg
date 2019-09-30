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
vector<pair<ll,ll>  > v(200001);
map<int,int > x;
map<int,int > y;
map<int,int > xy;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int a,b;
    forin(i,n)
    {
        cin>>xa>>ya;
        x[xa]++;
        x[ya]++;
    }

   // sort(all(v));
    int c=0;
    forin(i,n)
        forisn(j,i+1,n)
            if(v[i].first== v[j].first || v[i].second== v[j].second)
                c++;
    cout<<c<<"\n";
    return 0;
}
