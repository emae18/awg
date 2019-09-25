#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;;
    int coins[n];


    for(int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    //sort(coins, coins+n, greater<int>());
    ll dp[x+1];
    memset(dp, INT_MAX, sizeof(dp));

    dp[0]= 0;
    //cout << dp[1];
    for(int i = 1; i <= x; i ++)
    {
        dp[i] = 0;
        for(int c = 0; c < n; c++)
        {
            if(i-coins[c] >= 0 && (dp[i] > dp[i-coins[c]]+1 || dp[i] == 0))
            {
                dp[i] = dp[i-coins[c]]+1;
            }
        }
    }
    cout << ((dp[x] != 0) ?  dp[x] : -1);
   // cout << "HOLA?";
    return 0;

}
