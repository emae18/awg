#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,aux;
    cin>>n;
    stack<int> p;
    for(int i=0;i<n;i++)
    {
        cin>>aux;
        p.push(aux);
    }
    for(int i=0;i<n;i++)
    {
        cout<<p.top()<<"\n";
        p.pop();
    }
    return 0;

}
