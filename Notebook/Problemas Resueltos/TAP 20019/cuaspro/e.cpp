#include<bits/stdc++.h>
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef function<bool(pair<int,int> ,pair<int,int>  )> Comparator;
Comparator comp=[](pair<int,int> e1,pair<int,int> e2){return e1.second<e2.second;};
unordered_map<int,int> aux;
int main()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll may=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        may=max(may,v[i]);
        aux[v[i]]++;
    }
    ll ans=0;
    ll ff[may+1];
    ff[0]=0;
    ff[1]=aux[1];
    for(ll i=2;i<may+1;i++){
        ff[i]=max(ff[i-1],ff[i-2]+aux[i]*i);
    }
    cout<<ff[may]<<"\n";
    return 0;
}
