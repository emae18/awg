#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    cout<<fixed<<setprecision(0)<< (2*(pow(2,n-1))+1)*(2*(pow(2,n-1))+1)<<"\n";
    return 0;
}
