#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
    int n;
    int a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a>b)cout<<"perdimos"<<"\n";
        if(a<b)cout<<"ganamos"<<"\n";
        if(a==b)cout<<"casi ganamos"<<"\n";
    }
    return 0;
}
