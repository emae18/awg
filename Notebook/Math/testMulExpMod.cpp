#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mulmod(ll a, ll b, ll m) {
	if(!b)return 0;
	ll q=mulmod(a,b/2,m);q=(q+q)%m;
	return b&1?(q+a)%m:q;
}
ll expmod(ll b, ll e, ll m){ // O(log e)
	if(!e)return 1;
	ll q=expmod(b,e/2,m);q=mulmod(q,q,m);
	return e&1?mulmod(b,q,m):q;
}
int main()
{
    int n;
    cin >> n;
    ll result = expmod(2, n, 1e9+7);
    cout << result << "\n";
}
