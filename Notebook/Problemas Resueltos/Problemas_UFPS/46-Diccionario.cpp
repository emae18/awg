#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;set<string> s;
    while(n--)
    {
        int t;string aux;
        cin>>t;
        while(t--)
        {
            cin>>aux;
            s.insert(aux);
        }
        set<string>::iterator it;
        for(it=s.begin();it!=s.end();it++ )cout<<*it<<"\n";
        cout<<"-\n";
        s.clear();
    }
    return 0;
}
