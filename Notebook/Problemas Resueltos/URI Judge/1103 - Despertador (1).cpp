#include<bits/stdc++.h>
#define fori(i,n) for(int i=0;i<n;i++)
#define foris(i,s,n) for(int i=s;i<int(n);i++)
#define forit(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);
    int h1,m1,h2,m2;
    int result=0;int minu,hor;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1== 0 && m1==0 && h2== 0 && m2==0)break;
        if(h2==h1)
        {
            hor=0;
            if(m1<=m2)
                 result=m2-m1;
            else
                result=24*60-max(m1,m2)+min(m1,m2);
        }else if(h2<h1)
        {
            h2+=24;
            if(m1<=m2)
                 result=((h2-h1)*60)+m2-m1;
            else
                result=((h2-h1)*60)-max(m1,m2)+min(m1,m2);
        }else{
            if(m1<=m2)
                 result=((h2-h1)*60)+m2-m1;
            else
                result=((h2-h1)*60)-max(m1,m2)+min(m1,m2);
        }
        cout<<result<<"\n";
    }
    return 0;
}
