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
    string a,b;
    cin>>a>>b;
    int x=0;
    for(int i = a.size();i>0;i--)x+=(a[i-1]-'0')*pow(10,a.size()-i);
    int y=0;
    for(int i=b.size();i>0;i--)y+=(b[i-1]-'0')*pow(10,b.size()-i);

    forin(i,4)
    {
        cout<<" ";
        if(4-a.size()-1<=i)
        {
            cout<<a<<"\n";
            i=4;
        }
    }

    forin(i,4)
    {
        if(i==0)cout<<"x";
        else cout<<" ";
        if(4-b.size()-1<=i)
        {
            cout<<b<<"\n";
            i=4;
        }
    }
    cout<<"----\n";
    string res = to_string(x*y);
    if(res.size()==4)cout<<res<<"\n";
    else {forin(i,4)
    {
        cout<<" ";
        if(4-res.size()-1<=i)
        {
            cout<<res<<"\n";
            i=4;
        }
    }}
    return 0;
}
