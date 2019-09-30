#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
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
    int v[3];
    cin>>v[0]>>v[1]>>v[2];
    if(v[2]==v[1]+v[0])
        cout<<v[0]<<"+"<<v[1]<<"="<<v[2]<<"\n";
    else if(v[0]==v[1]+v[2])
        cout<<v[0]<<"="<<v[1]<<"+"<<v[2]<<"\n";
    else if(v[2]==v[0]-v[1])
        cout<<v[0]<<"-"<<v[1]<<"="<<v[2]<<"\n";
    else if(v[0]==v[1]-v[2])
        cout<<v[0]<<"="<<v[1]<<"-"<<v[2]<<"\n";
    else if(v[2]==v[0]*v[1])
        cout<<v[0]<<"*"<<v[1]<<"="<<v[2]<<"\n";
    else if(v[0]==v[1]*v[2])
        cout<<v[0]<<"="<<v[1]<<"*"<<v[2]<<"\n";
    else if(v[2]==v[0]/v[1])
        cout<<v[0]<<"/"<<v[1]<<"="<<v[2]<<"\n";
    else if(v[0]==v[1]/v[2])
        cout<<v[0]<<"="<<v[1]<<"/"<<v[2]<<"\n";


    return 0;
}
