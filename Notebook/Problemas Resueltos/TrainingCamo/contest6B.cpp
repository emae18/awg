#include<bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;

#define DBG(x) cerr << #x << " = " << (x) << endl

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, k;
    cin >> n >> m >> k;

    ld s1 = 0;
    ld s2 = 0;
    ld s3 = 0;
    ld s4 = 0;

    for(ld i = 1; i <= n; i++){
        s1 += log(i);
        if (i <= m) {
            s2+= log(i);
        }
        if (i <= (n - m)){
            s3+= log(i);
        }
    }

    s4 = n*log(2);

    cout << fixed<<setprecision(15) << exp(s1 - (s2 + s3 + s4)) << "\n";
    return 0;
}
