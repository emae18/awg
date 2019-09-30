#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int main()
{
    int t;
    cin>>t;
    int n,m;
    while(t--){
        cin>>n>>m;
        vi a(n);
        vi b(n);
        vi c(n);
        vi q(m);
        forin(i,n)cin>>a[i];
        forin(i,n)cin>>b[i];
        forin(i,n)cin>>c[i];
        forin(i,m)cin>>q[i];
        sort(all(a));
        sort(all(b));
        sort(all(c));

    }
    return 0;
}
