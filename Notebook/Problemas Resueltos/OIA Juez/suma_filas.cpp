#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int aux;
    vector<int> f(n,0);
    vector<int> c(m,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>aux;
            f[i]+=aux;
            c[j]+=aux;
        }
    }
    for(int i=0;i<f.size();i++)cout<<f[i]<<" ";
    cout<<"\n";
    for(int i=0;i<c.size();i++)cout<<c[i]<<" ";

    return 0;
}
