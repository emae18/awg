#include<bits/stdc++.h>
using namespace std;
bool visitado[2005];
vector<int> distancias;
vector<vector<int> > v;
int d=0;
void dfs(int nodo)
{
    visitado[nodo]=true;
    d++;
    if(v[nodo].size()==0)
    {
        distancias.push_back(d);
        d=0;
    }
    cout<<"visitando el nodo<<"<<nodo<<"\n";
    for(int i=0;i<v[nodo].size();i++)
    {
        int curren=v[nodo][i];
        if(!visitado[curren])dfs(curren);
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    v.resize(n+1);
    int nodo;
    for(int i=1;i<=n;i++)
    {
        cin>>nodo;
        if(nodo==-1)continue;
        v[nodo].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        if(!visitado[i])dfs(i);
    }
    for(int i=0;i<distancias.size();i++)cout<<distancias[i]<<" ";
    cout<<"\n";
    for(int i=1;i<=n;i++)
    {
        cout<<"padre i <<"<<i<<"-> ";
        for(int j=0;j<v[i].size();j++)
        {
            cout<< v[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
