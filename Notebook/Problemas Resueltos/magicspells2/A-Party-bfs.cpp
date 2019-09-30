#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)

using namespace std;
bool visitado[2005];
vector<vector<int> > v;
int d=0;
vector<int > bfs(int nodo)
{
    vector<int> d(v.size(),-1);
    queue<int> q;
    d[nodo]=0;
    q.push(nodo);
    while(!q.empty())
    {
        int x= q.front();
        q.pop();
        for(int y : v[x])
        {
            if(d[y]==-1)
            {
                d[y]=d[x]+1;
                q.push(y);
            }
        }
    }
    return d;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    v.resize(n+1);
    int nodo;
    vector<int> padres;
    for(int i=1;i<=n;i++)
    {
        cin>>nodo;
        if(nodo==-1)padres.push_back(i);
        else
        v[nodo].push_back(i);
        //v[i].push_back(nodo);
    }
    vector<int> dis(n+1,-1);
    int may=0;
    forin(i,padres.size())
    {
        if(dis[padres[i]]==-1)
        {
            dis=bfs(padres[i]);
            may=max(may,*max_element(dis.begin(),dis.end()));

            //cout<<"tiro bs en<<"<<i<<": ";
            forisn(x,1,dis.size())
            {
                //cout<<dis[x]<<"...";
            }//cout<<"\n";
        }
    }
    cout<<may+1<<"\n";
    return 0;
}
