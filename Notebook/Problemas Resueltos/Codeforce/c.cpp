#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){return a?gcd(b %a, a):b;}

int main()
{
    ll n, m;
    int q;
    cin >> n >> m >> q;
    ll mcmn = n/gcd(n,m);
    ll mcmm = m/gcd(n,m);

    for(int i = 0; i < q; i++)
    {
        ll c1 = 0, c2 = 0;
        ll sx, sy, ex, ey;
        cin >> sx >> sy >> ex >> ey;
        c1 = (sx == 1) ? (sy+ mcmn-1)/mcmn : (sy+mcmm-1)/mcmm;
        c2 = (ex != 1) ? (ey+ mcmm-1)/mcmm : (ey+mcmn-1)/mcmn;
        if(c1 == c2) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;

    /*
    1000000000000000000 1 10000
1 427029063434323122 2 1
1 327116883018072223 2 1
2 1 1 451812065724875968
2 1 1 807854579186448569
1 91951593020825417 2 1
1 952963275887627487 2 1
2 1 2 1
2 1 1 542197538494360097
1 515626155233990418 1 969185155414020932
2 1 2 1
1 122421177849716478 1 759087829414118565
2 1 1 567052734393990982
1 659936495357557045 1 955220236056766848


    */
}
