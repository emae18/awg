#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int v[3];
    int k[3];int sum=0;
    for(int i=0;i<3;i++)
        cin>>v[i];
    for(int i=0;i<3;i++)
        cin>>k[i];
    for(int i=0;i<3;i++)
        if(k[i]>v[i])sum+=(k[i]-v[i]);
    cout<<sum<<"\n";
    return 0;
}
