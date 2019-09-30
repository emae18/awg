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
    int n;
    cin>>n;
    int t,k;
    while(n--){
    cin>>t>>k;
    vi v(t,0);
    forin(i,t)cin>>v[i];
    vi::iterator it=find(v.begin(),v.end(),k);
    if(it!=v.end())
        cout<<distance(v.begin(),it)+1<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
