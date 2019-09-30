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
    int h,w;
    cin>>h>>w;
    char v[h][w];
    forin(i,h)
        forin(j,w)cin>>v[i][j];
    int cont=0;
    forisn(i,1,h-1)
    {
        forisn(j,1,w-1)
        {
            if(v[i][j]=='*' && v[i+1][j]=='*'
               && v[i-1][j]=='*' && v[i][j+1]=='*'
               && v[i][j-1]=='*' && v[i+1][j+1]=='.'
               && v[i+1][j-1]=='.' && v[i-1][j+1]=='.'
               && v[i-1][j-1]=='.' )cont++;
        }
        if(cont>1)break;
    }
    cout<<((cont==1)?"YES\n":"NO\n");
    return 0;
}
