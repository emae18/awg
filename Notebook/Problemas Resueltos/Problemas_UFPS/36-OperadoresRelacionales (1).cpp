#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b){cout<<a<<" > "<<b<<"\n";continue;}
        if(a<b){cout<<a<<" < "<<b<<"\n";continue;}
        if(a==b){cout<<a<<" = "<<b<<"\n";continue;}
    }
    return 0;
}
