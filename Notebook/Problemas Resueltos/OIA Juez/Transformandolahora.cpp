#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    string c;
    cin>>c;
    a=((c[0]-'0')*10)+(c[1]-'0');
    b=((c[3]-'0')*10)+(c[4]-'0');
    if(a==12)cout<<a<<":"<<((b<10)?"0":"")<<b<<" PM\n";
    else if(a>11)
    cout<<((a%12==0)?"12":((a%12<10)?"0":""))<<a%12<<":"<<((b<10)?"0":"")<<b<<" PM\n";
    else if (a==00)cout<<12<<":"<<((b<10)?"0":"")<<b<<" AM\n";
    else cout<<((a<10)?"0":"")<<a<<":"<<((b<10)?"0":"")<<b<<" AM\n";
    return 0;
}
