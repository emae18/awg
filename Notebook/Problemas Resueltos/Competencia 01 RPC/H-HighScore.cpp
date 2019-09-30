#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
     long long a,b,c,d;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        long long v[3];
        v[0]=a;
        v[1]=b;v[2]=c;
        sort(v,v+3);
        cout<<v[0];
        v[0]+=d;
         long long resul= pow(v[0],2)+pow(v[1],2)+pow(v[2],2)+7*min(v[0],min(v[1],v[2]));
        cout<<resul<<"\n";
    }
    return 0;
}
