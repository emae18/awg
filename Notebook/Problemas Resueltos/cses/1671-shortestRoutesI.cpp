#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int maxN = 1e5+1;
struct tedge
{
    int b;
    ll d;
    tedge(int b = 0, ll d = 0) : b(b), d(d) {}
};


vector<tedge> cities[maxN];
ll dists[maxN];

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    ll d;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b >> d;
        cities[a].push_back(tedge(b,d));
    }
    memset(dists, -1, sizeof(dists));

    priority_queue< pair<ll, int>, vector< pair<ll, int> >, greater< pair<ll, int> > > revisar;
    revisar.push({0, 1});
    dists[1] = 0;
    vector<bool> visited(maxN, false);
    while(!revisar.empty())
    {
        int act = revisar.top().second;
        ll dAct = revisar.top().first;
        revisar.pop();
        if(visited[act]) continue;
        visited[act] = true;
        for(auto e : cities[act])
        {
            ll sumTime = dAct + e.d;
            if((sumTime < dists[e.b] || dists[e.b] < 0))
            {
                dists[e.b] = sumTime;
                revisar.push({sumTime, e.b});
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << dists[i]<< " ";
    }
}
