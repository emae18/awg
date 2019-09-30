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
    int n;cin>>n;
    vector<string> v(n,"");
    forin(i,n)
    {
        cin>>v[i];
        transform(v[i].begin(), v[i].end(), v[i].begin(), (int(*)(int))tolower);
        if((v[i][0]==v[i][v[i].size()-1]))
            cout<<v[i]<<"\n";
    }
    return 0;
}
