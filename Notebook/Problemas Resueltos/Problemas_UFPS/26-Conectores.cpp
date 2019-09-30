#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
 	cin.tie(NULL);
    int n;
    int a[6];
    int b[6];
    cin>>n;
    int h;
    while(n--)
    {
        h=0;
        for(int i=0;i<6;i++)cin>>a[i];
        for(int i=0;i<6;i++)cin>>b[i];
        while(a[h]!=b[h] && h<6){if(a[h]==b[h])break;h++;}
        if(h>5)
        cout<<"COMPATIBLE\n";
        else cout<<"INCOMPATIBLE\n";
    }
    return 0;
}
