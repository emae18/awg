#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll, int> F;
void fact(ll n){
    F.clear();
    for(ll p = 2; p*p <= n; p++)
        while(n%p == 0)F[p]++, n /= p;
    if(n > 1)F[n]++;
}

ll CantDiv(ll n){
    fact(n);
    ll ans = 1;
    for(auto f : F)ans *= (f.second + 1);
    return ans;
}
