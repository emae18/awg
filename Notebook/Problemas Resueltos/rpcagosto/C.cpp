#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b){return a?gcd(b %a, a):b;}
int main()
{
    int n;
    cin >> n;
    int days[n];
    int suciedad[n];
    for(int i = 0 ; i < n; i++) cin >> days[i];
    int sucAcum = 0;
    suciedad[0] = 1;
    int ultL = 0;
    int limpiezas= 0;

    int j = 0;
    for(int i = 1; i < 395; i++)
    {
        sucAcum+=ultL;
        if(sucAcum > 19)
        {
            sucAcum = 0;
            ultL = 0;
            limpiezas++;
        }
        if(j < n && i == days[j])
        {
            j++;
            ultL++;
        }
    }
    cout << limpiezas << "\n";

}
