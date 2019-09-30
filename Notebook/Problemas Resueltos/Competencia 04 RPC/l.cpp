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
    string r="A23456789TJQK";
    set<char> s;
    multiset<char> ms;
    vector<string> v(5,"");
    forin(i,5)
    {
         cin>>v[i];
         ms.insert((char)v[i][0]);
    }
    forin(i,r.size())
    {
        if(ms.find((char)r[i])!=ms.end())
        {
            cout<<ms.count((char)r[i])<<"\n";
            return 0;
        }
    }
    cout<<0<<"\n";
    return 0;
}
