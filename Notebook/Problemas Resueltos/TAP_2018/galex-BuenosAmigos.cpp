#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio (0);
    cin.tie (NULL);
    int m, ans;
    long long d, n, d1, d2, dt;
    cin >> d >> m >> d1 >> n >> d2;
    dt = d;
    ans = 0;
    if(d1 >= 2*d || d2 >= 2*d){
        cout << 1 << "\n";
        return 0;
    }
    if(d1 <= d && d2 <= d){
        cout << -1  << "\n";
        return 0;
    }
    while (m-- && dt > 0)
    {
        ans ++;
        dt *= 2;
        dt -= d1;
    }
    while (n-- && dt > 0)
    {
        ans ++;
        dt *= 2;
        dt -= d2;
    }
    (dt > 0) ? cout << -1 : cout << ans;
    cout << "\n";
    return 0;
}
