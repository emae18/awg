#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,c,hr,hr1,ar;int aux,aux2;
    cin>>a>>c;
    set<int> s;
    s.insert(a-c);
    s.insert(c-a);
    s.insert((a+360-c)*(-1));
    s.insert(c+360-a);
    set<int> neg,pos;
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        if(*it<0)neg.insert(*it);
        else pos.insert(*it);
    }
    if(abs(*neg.rbegin())<abs(*pos.begin()))
        cout<<*neg.rbegin();
    else
        cout<<*pos.begin();
    return 0;
}
