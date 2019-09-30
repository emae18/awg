#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;int m=0,d=0,a=0;
    cin>>n;
    multiset<int> s;set<int> s1;
    while(n--)
    {
        cin>>m;
        s.insert(m);
        s1.insert(m);
    }
    for(set<int>::iterator it=s1.begin();it!=s1.end();it++)
    {
        cout<<*it<<" aparece "<<s.count(*it)<<" vez(es)\n";
    }
    return 0;
}
