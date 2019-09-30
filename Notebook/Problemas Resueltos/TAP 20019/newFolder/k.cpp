#include <bits/stdc++.h>
#define mostrar(x,v) for(auto x :v) cout<<x<<" "
#define forin(i,n) for(int i=0;i<(int)n;i++)
#define all(v) v.begin(),v.end()
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int> > d;
    vector<pair<int,int> > j;
    vector<pair<int,int> > ji;
    vector<pair<int,int> > di;
    while(n--){
        char c;
        int a,b;
        cin>>c>>a>>b;
        if(c=='D'){
            d.push_back({a,b});
            di.push_back({b,a});
        }else j.push_back({a,b}),ji.push_back({b,a});
    }
    sort(all(d));
    sort(all(di));
    sort(all(j));
    sort(all(ji));
    int maxAns=0;
    if(d.size()<j.size()){
        for(auto x : d){
            int ans;
            auto p1=lower_bound(all(j),x);
            auto p2=lower_bound(all(ji),x);
            int ans1=0,ans2=0;
            if(p1!=j.end()){
                cout<<p1->second<<" "<<x.second<<"\n";
                if(p1->second<x.second)
                    ans1=p1->second-p1->first,cout<<ans1<<"\n";
            }
            if(p2!=ji.end()){
                cout<<p1->second<<" "<<x.second<<"\n";
                if(p2->first<x.first)
                    ans2=p2->first-p2->first,cout<<ans2<<"\n";
            }
            ans=max(ans1,ans2);
            maxAns=max(ans,maxAns);
        }
    }else{
            for(auto x : j){
            int ans;
            auto p1=lower_bound(all(d),x);
            auto p2=lower_bound(all(di),x);
            int ans1=0,ans2=0;
            if(p1!=j.end()){
                cout<<p1->second<<" "<<p1->first<<" de "<<x.second<<"\n";
                if(p1->second<x.second)
                    ans1=p1->second-p1->first,cout<<ans1<<"\n";
            }
            if(p2!=ji.end()){
                cout<<p2->second<<" "<<x.second<<"\n";
                if(p2->first<x.first)
                    ans2=p2->first-p2->first,cout<<ans2<<"\n";
            }
            ans=max(ans1,ans2);
            maxAns=max(ans,maxAns);
        }
    }
    cout<<maxAns<<"\n";
    return 0;
}

