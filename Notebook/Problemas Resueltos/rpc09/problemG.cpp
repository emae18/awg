#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Punto
{
    ll x,y;
    Punto(ll x = 0, ll y = 0) : x(x), y(y){}

};
ll gcd(ll a, ll b){return a?gcd(b %a, a):b;}
const int maxN = 1e5;
int main()
{
    int n;
    cin >> n;
    Punto puntos[maxN];
    for(int i = 0; i < n; i++)
    {
        cin >> puntos[i].x >> puntos[i].y;
    }
    ll A =0, R=0;
    for(int i = 0; i < n; i++)
    {
        A+= puntos[i].x*puntos[(i+1)%n].y-puntos[i].y*puntos[(i+1)%n].x;
        R+= gcd(abs(puntos[i].x-puntos[(i+1)%n].x), abs(puntos[i].y-puntos[(i+1)%n].y));
    }
    cout << abs(A/2)-R/2+1<<"\n";
}
