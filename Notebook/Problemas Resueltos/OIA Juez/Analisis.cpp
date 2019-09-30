#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;string aux;
    unordered_set<string> s;
    cin>>n;
    while(n--)
    {
        cin>>aux;
        s.insert(aux);
    }
    for(auto x: s)
    {
        cout<<"Hola "<<x<<"\n";
    }
    return 0;
}
