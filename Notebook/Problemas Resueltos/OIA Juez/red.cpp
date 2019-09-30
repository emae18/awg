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
    ifstream cin("red.in");
    ofstream cout("red.out");
    int n,a,b;char c;
    map<int,unordered_set<int> > m;
    while(cin>>c){
        if(c=='F')break;
        cin>>a>>b;
        if(c=='P')
        {
            if(m.find(a)!=m.end())
            {
                    cout<<((m[a].find(b)!=m[a].end())?"S\n":"N\n");
            }else cout<<"N\n";
        }
        if(c=='C')
        {
            m[a].insert(b);
            if(m.find(b)!=m.end())
            {
                m[b].insert(a);
                for(auto x : m[b])
                    m[a].insert(x);
            }
        }
    }
    return 0;
}

