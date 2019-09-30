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
    ifstream cin("maniobra.in");
    ofstream cout("maniobra.out");
    vi v(4);
    vi v1(4);
    forin(i,4)cin>>v[i];
    forin(i,4)cin>>v1[i];
    vi k;
    forin(i,4)
    {
        if(find(v.begin(),v.end(),v1[i])!=v.end())k.push_back(v1[i]);
    }int sum=0;
    forin(i,k.size())sum+=k[i];
    cout<<sum;
    return 0;
}

