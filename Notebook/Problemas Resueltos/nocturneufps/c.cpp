#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define DG(x) cout<<#x<<"="<<x<<"\n";
#define mostrar(x,s) for(auto x : s)cout<<x<<" ";

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef function<bool(pair<string,int> ,pair<string,int> )>Comparator;
Comparator comp=[](pair<string,int> e1,pair<string,int> e2){return e1.second>e2.second;};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true){
        char table[8][8];
        vector<pair<char,pair<int,int> > > ks;
        forin(i,8){
            forin(j,8){
                cin>>table[i][j];
                if(table[i][j]=='k' || table[i][j]=='K')ks.push_back({table[i][j],{i,j}});
            }
        }
        if(ks.size()==0)return 0;




    }
    return 0;
}
