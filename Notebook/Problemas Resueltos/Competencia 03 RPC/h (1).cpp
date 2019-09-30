#include<bits/stdc++.h>
using namespace std;
bool m[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,k;
    cin>>n;int i,j;
    for(i=0;i<n;i++)m[i]=true;
    for(i=2;i<n;i++)
    {
        if(m[i])
           {
               for(j=2;i*j<n;j++)m[i*j]=false;
           }
    }
    for(i=2;i<n;i++)
    {
        if(m[i])cout<<"i: "<<i<<"\n";
    }
    return 0;
}
