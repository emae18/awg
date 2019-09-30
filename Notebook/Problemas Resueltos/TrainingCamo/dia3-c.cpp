#include<bits/stdc++.h>
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
    int n;
    cin>>n;
    int k=(n-1)/2;
    vl v(n);
    forin(i,n)
        cin>>v[i];
    vl b(n),c(n);
    for(int i=0;i<=n/2;i++)
    {
         int ab= (v[i]-v[n-1-i])/-2;
         b[i]=(ab*-1);
         b[n-1-i]=ab;
         c[n-1-i]=(v[n-1-i]-ab);
         c[i]=c[n-1-i];
         if(v[i] != b[i] + c[i] ||
            v[n-1-i] != b[n-1-i] + c[n-1-i]) {
                cout << "NO" << "\n"; return 0;
            }
    }
    cout << "YES" << "\n";
    mostrar(x,b);
    cout<<"\n";
    mostrar(x,c);
    return 0;
}


