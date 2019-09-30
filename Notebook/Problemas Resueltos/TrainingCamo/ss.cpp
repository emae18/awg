#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define DBG(x) cerr << #x << " = " << (x) << endl

#define MOD 1000000007

ll expmod(ll b, ll e, ll m){
    if(!e) return 1LL;
    ll q = expmod(b, e/2, m);
    q = (q*q) % m;
    return e%2 ? (b * q) % m : q;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, n;
    cin >> a >> n;
    if(a==1 && n==1){
        cout<<1<<"\n";
        return 0;
    }
    ll p = MOD;

    ll b = (expmod(a, n + 1, p) - 1) % p;
    ll c = a - 1;

    ll inv_c = expmod(c, p - 2, p);

    ll res = ((b % p) * (inv_c)) % p;

    cout << res << "\n";

    return 0;
}
