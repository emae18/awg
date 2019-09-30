#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    scanf("%d.%d",&a,&b);
    int r=a*100+b;
    cout<<36000*r/__gcd(36000,r)/r<<"\n";
    return 0;
}
