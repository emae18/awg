#include <bits/stdc++.h>
using namespace std;
int nextMax(int pos, vector <int> v){
    for(int i = pos+1; i < v.size(); i++ ){
            if(max(v[pos],v[i]) != v[pos])
            return i;
    }
    return pos;
}
int main(){
    int n,m,aux;
    vector <int> times;
    cin >> n>>m;
   times.resize(n);
    for(auto&x:times) cin >> x;
    int pos = m;
    int ans = 0;
    ans += times[pos];
    while(n-1-pos >= m){
        aux = nextMax(pos,times);
        if(aux != pos && abs(pos-aux) >=m)
            pos = nextMax(pos,times);
        else
            pos+=m;
        ans += times[pos];
    }
    cout << ans<<endl;
    return 0;
}
