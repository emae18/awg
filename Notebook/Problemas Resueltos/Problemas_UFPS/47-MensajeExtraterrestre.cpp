#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;set<int> s;

        int t, aux;
    while(n--)
    {
        cin>>t;
        while(t--)
        {
            cin>>aux;
            s.insert(aux);
        }
        set<int>::iterator it;
        for(it=s.begin();it!=s.end();it++ )cout<<*it<<"\n";
        cout<<"-\n";
        s.clear();
    }
    return 0;
}
