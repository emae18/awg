#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    string a,b; int cont =0;
    int x=boost::math::lcm(2,3);
    cin>>k;
    cin>>a>>b;
    for(int i=0;i<k;i++)
        if(a[i]==b[i])cont++;
    for(int i=k;i<a.size();i++)
        if(a[i]!=b[i] || a[i]=='T')cont++;
    cout<<cont<<"\n";

    return 0;
}
