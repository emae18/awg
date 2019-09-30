#include<bits/stdc++.h>
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
typedef long long ll;
/*typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;*/
using namespace std;
string v[100][100];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll c;
    cin>>c;
    ll d,v;
    map<ll,set<int>> m;
    while(c--)
    {
        cin>>d>>v;
        m[d].insert(v);
    }
	return 0;
}
