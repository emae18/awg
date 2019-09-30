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
    vi sum(5,0);set<int> s;
    int n;
    forin(i,4){cin>>n;sum[0]+=n;}
    forin(i,4){cin>>n;sum[1]+=n;}
    forin(i,4){cin>>n;sum[2]+=n;}
    forin(i,4){cin>>n;sum[3]+=n;}
    forin(i,4){cin>>n;sum[4]+=n;}
    forin(i,5)s.insert(sum[i]);
    int index=distance(sum.begin(),find(sum.begin(),sum.end(),*s.rbegin()))+1;
    cout<<index<<" "<<*s.rbegin()<<"\n";
    return 0;
}
