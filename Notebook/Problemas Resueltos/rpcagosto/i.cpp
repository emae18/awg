#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin>>s;
    map<char,int > m;
    forin(i,s.size())
        m[s[i]]++;
    bool par=false,impar=false;
    for(auto x: m)
    {
        if(x.second%2==0)par=true;
        if(x.second%2!=0)impar=true;
    }
    if(par && impar)cout<<2<<"\n";
    else if(par) cout<<0<<"\n";
    else cout<<1<<"\n";
    return 0;

}
