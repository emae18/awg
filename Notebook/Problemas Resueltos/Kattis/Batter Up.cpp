#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    int m=n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        if(k==-1)
        {
            m--;
            continue;
        }sum+=k;
    }
    cout<<fixed<<setprecision(17)<<sum/m<<"\n";
    return 0;
}
