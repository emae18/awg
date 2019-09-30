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
    int n,m;
    cin>>n;
   vi a(n);
    forin(i,n)cin>>a[i];
    cin>>m;
    vi b(m);
    forin(i,m)cin>>b[i];
    sort(all(a));
    sort(all(b));
    int ult=(*a.rbegin()+*b.rbegin());
    int pri=(*a.begin()+*b.begin());
    if(!binary_search(all(a),ult)){
        cout<<*a.rbegin()<<" "<<*b.rbegin();
        return 0;
    }
    if(!binary_search(all(a),pri)){
        cout<<*a.begin()<<*b.begin();
        return 0;
    }
    return 0;
}
