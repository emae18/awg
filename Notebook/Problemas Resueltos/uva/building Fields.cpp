#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    ll num;
    long p,mp;
    bool vuelta = false;
    vector<int>  distancias;
    set <ll> sp;
    sp.insert(0);
    cin >> n;
    int k = n;
    ll acum = 0;
    while(n--){
        cin >> num;
        acum+= num;
        distancias.push_back(num);
        sp.insert(acum);
    }
    if(acum%2 != 0)
    {
        cout << "N\n";
        return 0;

    }
    sp.erase(acum);
    mp = acum/2;
    ll acum2 = 0;
    int puntos = 0;
    for(int i = 0; i < k ; i++)
    {
        acum2 += distancias[i];
        if(sp.find((acum2+mp)%acum) != sp.end()) puntos++;
        if(puntos >= 4) break;

    }
    if(puntos >= 4) cout << "Y\n";
    else cout << "N\n";

}


/*
8
3 3  4 2 6 2 2 2

4
14 16 15 15

6
3 7 7 3 10 10
*/
