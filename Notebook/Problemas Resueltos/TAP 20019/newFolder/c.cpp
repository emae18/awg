#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<vector<char> > v(n,vector<char>(m));
    forin(i,n){
        forin(j,m){
            cin>>v[i][j];
        }
    }
    int cont=0;
    forin(i,n){
        forin(j,m){
            if(v[i][j]=='*' && v[i-1][j]=='*' && v[i][j-1]=='*'
               && v[i+1][j]=='*' && v[i][j+1]){
                if(v[i-1][j]=='.' && v[i+1][j]=='.' && v[i][j+1]=='.' && v[i][j-2]=='*')cont++;
                else {
                    while(v[])

                }
            }
        }
    }
    cout<<cont<<"\n";
    return 0;
}

