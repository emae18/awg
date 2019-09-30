#include<bits/stdc++.h>

using namespace std;
unsigned long long fact(int a)
{
    if(a==1)return 1;
    else return a*fact(a-1);
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n,m;
    unsigned long long resul;
    while(cin>>n>>m)
    {
        if(n==0)cout<<((m==0)?2:fact(m)+1)<<"\n";
        else if(m==0)cout<<((n==0)?2:fact(n)+1)<<"\n";
        else cout<<fact(m)+fact(n)<<"\n";
    }
    return 0;
}
