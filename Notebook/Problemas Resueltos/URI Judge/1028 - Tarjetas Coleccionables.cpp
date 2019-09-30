#include<bits/stdc++.h>

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;int f1,f2;
    while(n--)
    {
        cin>>f1>>f2;

        cout<<gcd(f1,f2)<<"\n";
    }
    return 0;
}
