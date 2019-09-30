#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<short> g[81];
ll dfs(short a, short b)
{
    ll ret = 1;
    for(auto e : g[a]) if(e != b) ret = max(ret, dfs(e, a)+1);
    return ret;

}
int main()
{
    int n, R, H, M;
    cin >> n >> R >> H >> M;
    int a, b;
    for(int i = 0; i < n-1; i++){
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);

    }
    ll resp = n;
    for(int i = 1; i <= n; i++)
    {
        if(i == H || i == M) resp = min(dfs(i, i)-1,resp);
        else resp = min(resp, dfs(i,i));

    }
//    if(resp > n) cout << "impossible\n";
cout << resp << "\n";
}
