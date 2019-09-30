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

    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        ll n,z;
        cin>>n>>z;
        vector<ll> p(n);
        forin(i,n)cin>>p[i];
        sort(p.begin(),p.end());
        ll pivot=p[p.size()-1]; int cont=0;
        for(ll i=p.size()-2;i>-1;i--)
        {
            if(pivot-p[i]>=z)
            {
                cont++;
                pivot=p[i-1];i--;
            }
        }
        cout<<cont<<"\n";
        return 0;
    }

