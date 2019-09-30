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
    string a;
    cin>>a;
    forin(i,a.size()+2)
        cout<<"*";
    cout<<"\n";
    forin(i,a.size()+2)
    {
        if(i==0 || i+1==a.size()+2)cout<<"*";
        else {cout<<a;i=a.size();}
    }
    cout<<"\n";
    forin(i,a.size()+2)
        cout<<"*";


    return 0;
}
