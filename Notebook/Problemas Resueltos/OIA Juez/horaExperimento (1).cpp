#include<bits/stdc++.h>
using namespace std;
vector<int> hms(int s)
{
    vector<int> v(3,0);
    v[0]=s/3600;
    s=s%3600;
    v[1]=s/60;
    v[2]=s%60;
    return v;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h,m,s,d;
    cin>>h>>m>>s>>d;
    vector<int> k=hms(d);
    h+=k[0];
    if(s+k[2]>=60){m++;s=s+k[2]-60;}
    else s+=k[2];
    if(m+k[1]>=60){h++;m=m+k[1]-60;}
    else m+=k[1];
    if(h>=24)h-=24;
    cout<<h<<" "<<m<<" "<<s<<"\n";
    return 0;
}
