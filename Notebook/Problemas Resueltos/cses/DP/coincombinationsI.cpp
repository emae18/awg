#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9+7;
int main()
{
    int n, x;
    cin >> n >> x;;
    int coins[n];

    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    ll dp[x+1];
    memset(dp, 0, sizeof(dp));
    dp[0]= 1;
    for(int i = 1; i <= x; i ++)
    {
        for(int c = 0; c < n; c++)
        {
            if(i-coins[c] >= 0)
            {
                dp[i]+= dp[i-coins[c]];
                dp[i]%=mod;
            }
        }
    }
    cout << dp[x];
   // cout << "HOLA?";
    return 0;

}
