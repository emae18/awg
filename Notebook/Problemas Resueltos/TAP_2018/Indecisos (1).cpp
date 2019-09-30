#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<n;i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    cin>>m;
    int p=0,n=0,z=0;
    string aux;
    cin>>aux;
    fori(i,m)
    {
        if(aux[i]=='P')p++;
        else if(aux[i]=='N')n++;
        else z++;
    }
    if(p>n+z)cout<<"SI\n";
    else if(n>=p+z)cout<<"NO\n";
    else cout<<"INDECISOS\n";

    return 0;
}
