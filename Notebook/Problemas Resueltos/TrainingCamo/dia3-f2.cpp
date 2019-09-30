#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_prime(ll m) {
    if(m == 1) return false;
    for(ll a = 2; a * a <= m; a++) {
        if(m % a == 0) return false;
    }
    return true;
}

bool divisors(ll m) {
    vector<ll> divs;
    for(ll a = 1; a * a <= m; a++) {
        if(m % a == 0) {
            divs.push_back(a);
            if(a != m/a) divs.push_back(m/a);
        }
        if(divs.size() > 3) return false;
    }
    return true;
}

int main() {
    ll t; cin >> t;
    while(t--) {
        ll x; cin >> x;
        if(is_prime(x)) { cout << "NO" << "\n"; continue; }
        if(divisors(x)) { cout << "YES" << "\n"; continue; }
        else { cout << "NO" << "\n"; continue; }
    }
}
