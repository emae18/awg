#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define all(v) v.begin(),v.end()
#define DG(x) cout<<#x<<"="<<x<<"\n";
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef function<bool(pair<string,int> ,pair<string,int> )>Comparator;
Comparator comp=[](pair<string,int> e1,pair<string,int> e2){return e1.second>e2.second;};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,p,m;
        cin>>n>>p>>m;
        string teams[n];
        map<int,vector<pair<string,pair<int,string> > > > contest;
        map<string,set<int> > resueltos;
        map<string,int> score;
        int minu,pr;string nom,res;
        forin(i,n)cin>>teams[i];
        forin(i,m){
            cin>>minu>>nom>>pr>>res;
            contest[minu].push_back({nom,{pr,res}});
        }
        for(auto x : contest){
            for(auto y : x.second){
                    if(y.second.second=="ACCEPTED" && resueltos[y.first].find(y.second.first)==resueltos[y.first].end()){
                        resueltos[y.first].insert(y.second.first);
                        //DG(y.first);
                        //DG(y.second.first);
                        score[y.first]++;
                        set<pair<string,int>,Comparator> s(all(score),comp);
                        cout<<s.begin()->first<<"\n";
                   }
            }
        }
    }
    return 0;
}
