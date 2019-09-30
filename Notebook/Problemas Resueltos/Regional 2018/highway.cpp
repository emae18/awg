#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll newLMax = 1e12;
struct arista
{
    int B;
    ll L, C;
    arista(int B = 0, ll L = newLMax,  ll C = newLMax): B(B), L(L), C(C){}
    bool operator <(const arista &b) const
    {
        if(b.L == L)
        {
            return C < b.C;
        }
        return L < b.L;
    }
};
struct Comp
{
    bool operator()(arista const& a, arista const& b)
    {
        if(a.L == b.L)
        {
            return b.L < a.L;
        }
        return b.L < a.L;
    }


};


short comparador(const arista &a, const arista &b)
{
    if(a < b) return 1;
    if(b < a) return 2;
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<arista> g[N+1];

    int a, b;
    ll l, c;
    for(int i = 0; i < M; i++)
    {
        cin >> a >> b >> l >> c;
        g[a].push_back(arista(b, l, c));
        g[b].push_back(arista(a, l, c));
    }
//    arista aristas[N+1];
    vector<arista> aristas(N+1, {0, newLMax, newLMax});
    aristas[1] = arista(1, 0, 0);
    priority_queue<arista, vector<arista>, Comp> recorrido;
    ll mejorCosto[N+1];
    recorrido.push(arista(1, 0 , 0));
    while(!recorrido.empty())
    {
        arista actual = recorrido.top();
        recorrido.pop();
        int nodoAct = actual.B;
        if(comparador(actual, aristas[nodoAct]) == 2) continue;
        for(auto e : g[nodoAct])
        {
            int next = e.B;
            arista nuevaArista = {next, e.L+actual.L, e.C};
            if(comparador(nuevaArista,aristas[e.B]) == 1)
            {
                aristas[next] = nuevaArista;
                mejorCosto[next] = e.C;
                recorrido.push(nuevaArista);

            }

        }
    }
    ll ans = 0LL;
    for(int i = 2; i <= N; i++)
    {
        ans+= mejorCosto[i];

    }

    cout << ans << "\n";
}
