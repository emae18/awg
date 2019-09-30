#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int T;
    ll alt[105];
    memset(alt, 0, sizeof(alt));
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        ll n,m,k;
        cin>>n>>m>>k;

        for(int l = 0; l < n; l++) cin >> alt[l];
        int l = 0;
        bool flag = true;
        for(; l < n;l++)
        {
            ll dif = alt[l]-max(alt[l+1]-k,0ll);
            if(m+dif >= 0) m+= dif;
            else {flag = false;break;}

        }
        cout << ((flag) ? "YES\n" : "NO\n");


    }
    return 0;
}
