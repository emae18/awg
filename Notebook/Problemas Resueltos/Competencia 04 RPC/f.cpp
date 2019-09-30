#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
bool puedo(pair<ll,ll> s,ll m, ll dias)
{
    if(dias*s.first>s.second && dias*s.first-s.second>=m)return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;ll m;
    cin>>n>>m;
    ll tasa,costo;
    map<ll , vector<pair<ll,ll> > > dias;
    forin(i,n)
    {
        cin>>tasa>>costo;
        if(costo%tasa==0)dias[costo/tasa].push_back({tasa,costo});
        else dias[(costo/tasa)+1].push_back({tasa,costo});
    }
    map<ll , vector<pair<ll,ll> >>::iterator it;
    it=dias.begin();
        forin(i,it->second.size())
        {
            if(it->second.size()>1)
            {
                pair<ll,ll> sum;
                ll sd=it->first;
                forin(j,it->second.size()){sum.first+=it->second[i].first;sum.second+=it->second[i].first;}
                while(!puedo(sum,m,sd))
                {
                    sd++;
                }
                cout<<sd<<"\n";
                return 0;
            }
            else if(it->first*it->second[i].first>it->second[i].second &&
               it->first*it->second[i].first-it->second[i].second>=m)
                {
                    cout<<it->first<<"\n";
                    return 0;
                }
              //  cout<<it->first<<" Gano por dia"<<it->second[i].first<<" cuesta "<<it->second[i].second<< "\n";

        }
    return 0;
}
