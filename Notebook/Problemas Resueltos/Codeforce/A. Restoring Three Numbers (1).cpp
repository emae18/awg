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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<ll> v(4,0);
    forin(i,4)cin>>v[i];
    sort(v.begin(),v.end());
    /*set<ll> div;
    ll k=0;
    forisn(i,1,v[v.size()-1])
            if( (v[k]%i==0 && v[1]%i==0
               ) || (v[0]%i==0 && v[2]%i==0
               ) || (v[k]%i==0 && v[3]%i==0
               ) || (v[1]%i==0 && v[2]%i==0
               ) || (v[1]%i==0 && v[3]%i==0
               ) || (v[2]%i==0 && v[3]%i==0
               ))div.insert(i);
    div.insert(*div.rbegin()-*div.begin());
    for(auto c : div )
        if(c+c == v[0] && c+c==v[1] && c+c==v[2] && c+c+c==v[3])
           {
             cout<<c<<" "<<c<<" "<<c<<"\n";
            return 0;
           }
    set<ll>::iterator it = div.begin();
    deque<ll> d;
    d.push_back(*it);it++;
    d.push_back(*it);it++;
    d.push_back(*it);
    bool band=false;*/
    cout<<v[3]-v[2]<<" "<<v[3]-v[1]<<" "<<v[3]-v[0]<<"\n";
    return 0;
}
