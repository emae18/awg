#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,m,s,d;
    cin>>h>>m>>s>>d;
    cout<<h+d%3600<<"a\n";
    cout<<m+d%360<<"a\n";
    cout<<s+d%60<<"a\n";
    cout<<h<<" "<<m<<" "<<s<<"\n";
    return 0;
}
