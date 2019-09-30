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
    ll d,am,dam,co,com;
    cin>>d>>am>>dam>>co>>com;
    ll res=d; int cont=0;
    if(dam<=d && com <= d){cout<<-1<<"\n";return 0;}

        while(am-- && d>0)
        {
            d-=dam;
            d+=res;
            res-=res;
            d*=2;
            cont++;
        }
        while(co-- && d>0)
        {
            d-=com;
            d+=res;
            res-=res;
            d*=2;
            cont++;
        }
    if(d>0)
        cout<<-1<<"\n";
    else
        cout<<cont<<"\n";

    return 0;
}
