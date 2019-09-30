#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define mostrar(x,v) for(auto x : v) cout<<x<<" ";
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    ll w,h,n;
    while(t--)
    {
        cin>>w>>h>>n;
        set<ll> x;
        set<ll> y;ll x1,y1;
        while(n--)
        {
            cin>>x1>>y1;
            x.insert(x1);
            y.insert(y1);
        }
        x.insert(0);
        y.insert(0);
        x.insert(w+1);
        y.insert(h+1);
        auto it = x.begin();
        it++;
        set<ll> difX;
        for(auto it2 : x)
        {
            difX.insert(abs(*it-it2));
           // cout<<abs(*it-it2)<<"\n";
            it++;
            if(it==x.end())break;
        }
        auto ity = y.begin();
        ity++;
        set<ll> difY;
        for(auto it2y : y)
        {
            difY.insert(abs(*ity-it2y));
            //cout<<abs(*it-it2)<<"\n";
            ity++;
            if(ity==x.end())break;
        }
        cout<<(*difX.rbegin()-1)*(*difY.rbegin()-1)<<"\n";
    }
    return 0;
}
