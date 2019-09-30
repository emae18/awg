#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int aux;
    int mt[m][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>mt[j][i];
    for(int i=0;i<m;i++)
        {for(int j=0;j<n;j++)
            cout<<mt[i][j]<<" ";
        cout<<"\n";}
    return 0;
}
