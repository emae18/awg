#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxN = 1e6+1;
const ll MOD = 1e9+7;
ll dp[maxN];
/*ll calc(int n )
{
    if(n < 1 ) return 0;
    if(n < 3) return n;
    if(dp[n]) return dp[n];
    return dp[n] = ((n<7 && n>0) +calc(n-1)+calc(n-2)+calc(n-3)+calc(n-4)+calc(n-5)+calc(n-6))%MOD;
}*/

int main()
{
    memset(dp, 0, sizeof(dp));
    int n;
    cin >> n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;
    if(n < 7) cout << dp[n];
    else
    {
        for(int i = 7; i < n+1; i++)
        {
            ll acum = 0;
            for(int j = i-6; j < i; j++)
            {
                acum = (acum+dp[j])%MOD;
            }
            dp[i] = acum%MOD;

        }
        cout << dp[n];
    }

    return 0;

}
