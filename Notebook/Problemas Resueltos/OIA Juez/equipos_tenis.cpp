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
using namespace std;
bool primo(int n)
{
    for(int i=2;i*i<=n;i++)if(n%i==)return false;
    return true;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi v(4,0);
    forin(i,4)cin>>v[i];
    sort(v.begin(),v.end());
    if(v[3]+v[0]==v[1]+v[2])cout<<0<<"\n";
    else if(v[3]+v[0]>v[1]+v[2])cout<<(v[3]+v[0])-(v[1]+v[2])<<"\n";
    else cout<<(v[1]+v[2])-(v[3]+v[0])<<"\n";
    return 0;
}
