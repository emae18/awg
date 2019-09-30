#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef vector<int> vi;
typedef long long ll;
bool comp(const pair<int,int> &p1,const pair<int,int> &p2){
    return p1.second>p2.second;
}
int main(){
    int n,k;
    cin>>n>>k;
    vi v(n);
    map<int,int> mapa;
    forin(i,n){
        cin>>v[i];
        mapa[v[i]]++;
    }
    set<pair<int,int>,Co> s(all(mapa),comp);
    for(auto x :s)cout<<x.first<<"\n";
    return 0;
}
