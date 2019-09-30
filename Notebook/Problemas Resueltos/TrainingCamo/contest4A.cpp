#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define mostrar(x,v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while(cin>>n)
    {
        if(n==-1)return 0;
        vector<vi> v(n+2);
        int nodo;
        forisn(i,1,n){
            cin>>nodo;
            v[i+1].push_back(nodo);
            v[nodo].push_back(i+1);
        }
        for(int j=1;j<v.size();j++)
        {
            cout<<j<<" -> ";
            for(int i=1;i<v[j].size();i++)
            {
                cout<<v[j][i]<<"\n";
            }
            cout<<"\n";
        }

    }
    return 0;
}
