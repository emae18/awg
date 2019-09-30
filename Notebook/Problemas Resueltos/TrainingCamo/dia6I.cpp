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
vl myStone;
vl destStone;
void cambio(int i)
{
    myStone[i]=(myStone[i+1]+myStone[i-1])-myStone[i];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    myStone.resize(n);
    destStone.resize(n);
    forin(i,n)cin>>myStone[i];
    forin(i,n)cin>>destStone[i];
    if(myStone[0]!=destStone[0] || myStone[n-1]!=destStone[n-1]){
        cout<<"NO\n";
        return 0;
    }
    int i=1;
    if(((myStone[i+1]+myStone[i-1])-myStone[i])==destStone[i]){
        for(i=1;i<n-2;i++)
        {
                       if(myStone[i]!=destStone[i]){ cambio(i);
                i=1;
                }

            mostrar(x,myStone);
            cout<<"\n";
        }
    }else{
        for(i=n-2;i>=1;i--)
        {
            if(myStone[i]!=destStone[i]){ cambio(i);
                i=n-2;
                }
            mostrar(x,myStone);
            cout<<"\n";
        }
    }
    for(int i=1;i<n-1;i++){
        if(myStone[i]!=destStone[i]){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}
