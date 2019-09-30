#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,h,w,center,rg,lf;
    vector<int> pesos;
    string row;
    cin>> h>>w;
    pesos.resize(w);
    while(h--){
        cin >> row;
        for(i=0;i<w;i++){
            if(row[i]!='.'){
                pesos[i]++;
            }
        }
    }
    for(i=0; i< w; i++){
        if(pesos[i] == 0 && pesos[i+1] != 0){
            pesos.erase(pesos.begin(),pesos.begin()+i+1);
            break;
        }
    }
    w = pesos.size();
    for(i=w-1; i>=0; i--){
        if(pesos[i] == 0 && pesos[i-1] != 0 && i-1 >= 0){
            pesos.erase(pesos.begin()+i,pesos.end());
            break;
        }
    }
    w = pesos.size();
    cout << w << endl;
    if (w >2){
            center = (w%2==0)?  (w / 2) - 1: w / 2;
            lf=0;
            rg=0;
        for(i = 0; i < center; i++){
            lf+=pesos[i];
            rg+=pesos[w-1-i];
        }
        cout << lf << " " << rg << endl;
        if(rg-lf > 0)   cout << "right\n";
        else if( rg-lf < 0) cout << "left\n";
        else    cout << "balanced\n";
    }else cout << "balanced\n";
    return 0;
}
