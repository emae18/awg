#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<int(n);i++)
using namespace std;

int main(){
    int n;int t,k;int sum;
    cin>>n;
    while(n--)
    {
        sum=0;
        cin>>k>>t;
        fori(i,t)
        {
            sum+=i+2;
        }
        cout<<k<<" "<<sum<<"\n";
    }
    return 0;

}
