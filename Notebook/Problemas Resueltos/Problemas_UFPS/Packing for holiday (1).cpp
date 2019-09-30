#include<bits/stdc++.h>
using namespace std;
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<int(n);i++)
#define foritv(i,n) for(vector<int>::iterator i=n.begin();i!=n.end();i++)
#define foritset(i,n) for(set<int>::iterator i=n.begin();i!=n.end();i++)
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vii;
typedef set<int> si;
typedef map<string, int> msi;
ll m[10000][10000];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int l,w,h;
    cin>>n;
    forin(i,n)
    {
        cin>>l>>w>>h;
        if(l<=20 && w<=20 && h<=20)cout<<"Case "<<i+1<<": "<<"good\n";
        else cout<<"Case "<<i+1<<": "<<"bad\n";
    }

    return 0;
}
