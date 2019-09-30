#include <bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
using namespace std;
typedef long long ll;
map<ll,vector<int> > m;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll m1,m2,n,k;
    cin>>n>>k;
    cin>>m1;
    vector<ll> v1(m1);
    forin(i,m1){
        cin>>v1[i];
        if(v1[i]<0)m[v1[i]*(-1)].push_back(-1);
        else m[v1[i]].push_back(1);
    }
    cin>>m2;
    vector<ll> v2(m2);
    forin(i,m2){
        cin>>v2[i];
        if(v2[i]<0)m[v2[i]*(-1)].push_back(-1);
        else m[v2[i]].push_back(1);
    }
    cout<<m.size()<<"\n";
    for(auto x : m){
        if(x.second.size()==2)
        {
            if(x.second[0]<0 && x.second[1]<0 )
                cout<<x.first*(-1);
            else if(x.second[0]<0 && x.second[1]>0
                    || x.second[0]>0 && x.second[1]<0){
                        m.erase(x.first);
                    }
        }
        cout<<x.first<<" ";
    }
    return 0;
}
