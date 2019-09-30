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
    ifstream cin("maraton.in");
    ofstream cout("maraton.out");
    int a;
    cin>>a;
    vector<int> v[11];
    int aux,b;
    forin(i,a)
    {
        cin>>aux>>b;
        v[b].push_back(aux);
    }
    forisn(i,1,11)
    {
        if(v[i].size()==0)cout<<i<<" "<<0<<"\n";
        else cout<<i<<" "<<v[i][0]<<"\n";
    }

    return 0;
}
