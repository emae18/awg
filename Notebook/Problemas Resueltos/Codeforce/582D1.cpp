#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef function<bool(pair<int,int> ,pair<int,int>  )> Comparator;
Comparator comp=[](pair<int,int> e1,pair<int,int> e2){return e1.second>e2.second;};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vi v(n+1);
    map<int,int> m;
    forin(i,n){
        cin>>v[i];
        m[v[i]]++;
    }
    set<pair<int,int>,Comparator> ss(m.begin(),m.end(),comp);
    if(ss.begin()->second==k){
        cout<<0<<"\n";
        return 0;
    }
    vector<int> s;
    forin(x,n){
        int p=v[x];
        forisn(i,x,n){
            int cont=0;
            if(v[i]==p)continue;
            int z=v[i];
            while(z>p){
                z/=2;
                cont++;
            }
            if(z==p){s.push_back(cont);}
        }
    }
    if(s.size()>=k){
        cout<<s[0]+s[1]+s[2] <<"\n";
    }else{

    }
    return 0;
}
