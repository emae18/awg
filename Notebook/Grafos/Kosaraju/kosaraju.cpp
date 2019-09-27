
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int maxN = 1e5+1;
bool color[maxN];

vector<int> g[maxN], gT[maxN];
stack<int> rev;
set<int> componente;

void dfs(int i)
{
    color[i] = true;
    for(auto next : g[i])
    {
        if(!color[next]) dfs(next);
    }
    rev.push(i);
}
int dfs2(int i)
{
    int ret = 0;
    color[i] = true;
    for(auto prev : gT[i])
    {
        if(!color[prev])
        {
            ret+= dfs2(prev);
            componente.insert(prev);
        }
    }
   // cout << ret << " " << i << "\n";
    return ret+1;
}

int correocentral(int n, vector<int> a, vector<int> b)
{
    int m = a.size();
    for(int i = 0; i < m; i++)
    {
        g[a[i]].push_back(b[i]);
        gT[b[i]].push_back(a[i]);

    }
    memset(color, false, sizeof(color));
    int N = n+1;
    for(int i = 1; i < N; i++)
    {
        if(!color[i]) dfs(i);
    }
    memset(color, false, sizeof(color));
    int maxTam = 0;
    int session;
    while(!rev.empty())
    {
        int act = rev.top();
        rev.pop();
        if(color[act]) continue;
           // componente.insert(act);
            maxTam = max(maxTam, dfs2(act));

    }

    return maxTam;
}
