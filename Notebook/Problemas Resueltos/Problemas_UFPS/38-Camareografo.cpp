#include<bits/stdc++.h>
using namespace std;

int main ()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n,t,k,aux;
    cin>>n;
    while(n--)
    {
        cin>>t>>k;
        set<int,greater<int> > v;
        for(int i=0;i<t;i++)
        {
            cin>>aux;
            v.insert(aux);
        }
        cout<<*v.begin()+k<<"\n";
    }
    return 0;
}
