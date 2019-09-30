#include<bits/stdc++.h>
using namespace std;
int hasha(int a,int b)
{
    return a%b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int m,c,i;
    int aux;
    for(int x=0;x<n;x++)
    {
        if(x)cout<<"\n";
        cin>>m>>c;
        vector<int>  v[m];
        for( i=0;i<c;i++){
            cin>>aux;
            v[hasha(aux,m)].push_back(aux);
        }
        for(i=0;i<m;i++)
        {
            cout<<i<<" -> ";
            for(int j=0;j<v[i].size();j++)
            {
                    cout<<v[i][j]<<" -> ";
            }
            cout<<"\\"<<"\n";
        }
    }

    return 0;
}
