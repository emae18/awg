#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<(int)n;i++)
using namespace std;

int main ()
{
    cin.tie(0);
    int n,t;int cont=0;
    cin>>n>>t;
    string v[n];
    fori(i,n)
    {
        cin>>v[i];
    }
    set<string> si;
    fori(i,n)
    {
        for(int j=i+1;j<n;j++){
        fori(k,t)
        {
            if(v[i][k]!=v[j][k] && v[i][k]!='?' && v[j][k]!='?')break;
            else cont++;
        }if(cont==t)si.insert(v[i]+v[j]);
        cont=0;}

    }
    cout<<si.size()<<"\n";
    return 0;
}
