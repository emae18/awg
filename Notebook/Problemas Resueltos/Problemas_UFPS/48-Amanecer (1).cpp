#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;set<int> s;
        set<int>::iterator it;
        int t, aux;
    while(n--)
    {
        cin>>t;
        while(t--)
        {
            cin>>aux;
            s.insert(aux);
        }
        cout<<"Horas diferentes: "<<s.size()<<"\n";
        cout<<"Temprano: "<<*s.begin()/60<<":"<<*s.begin()%60<<"\n";
        cout<<"Tarde: "<<*s.rbegin()/60<<":"<<*s.rbegin()%60<<"\n";
        s.clear();
    }
    return 0;
}
