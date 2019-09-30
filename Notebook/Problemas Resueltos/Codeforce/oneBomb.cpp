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
    cin>>n>>m;
    char c[n+1][m+1];
    vi f(n),co(m);
    int bombs=0;
    forin(i,n){
        forin(k,m){
            cin>>c[i][k];
            if(c[i][k]=='*'){
                    bombs++;
                //cout<<i<<"-"<<k<<": ->" <<bombs<<"\n";
                f[i]++;
                co[k]++;
            }
        }
    }
    forin(i,n){
        forin(k,m){
            //cout<<f[i]<<":"<<i<<" - "<<co[k]<<":"<<k<<"\n cont:"<<bombs<<"\n";
            int sum=f[i]+co[k];
            if(c[i][k]=='*')sum--;
            if(sum==bombs){
                cout<<"YES\n"<<i+1<<" "<<k+1<<"\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";

    return 0;
}
