#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9+7;

int n, k;
const int maxN = 2550;
//vector< vector<int> > dp(2501, vector<int>(2501, -1));
int dp[maxN][maxN];

int solve(int idn, int h)
{

    if(idn == n) return h==k;
    int &retVar = dp[idn][h];
    if(retVar != -1) return retVar;
    retVar = 0;
    if(h> 1)
    {
        (retVar+=solve(idn+1,h)*1LL*(h-1)%mod)%=mod;
    }
    if(h < k)
    {
        (retVar+=solve(idn+1,h+1)*1LL*(k-h)%mod)%=mod;
    }
    return retVar;

}

int main()
{
    ios::sync_with_stdio(false);
    cin >> n >> k;
    int elements[k];
    for(int i= 0; i < k; i++) cin >> elements[i];
    memset(dp, -1, sizeof(dp));
    cout << solve(0, 0) << endl;
}
