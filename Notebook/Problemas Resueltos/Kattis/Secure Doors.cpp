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
    map<string,stack<int> > m;
    string a,a1;int b;
    forin(i,n)
    {
        cin>>a>>a1;
        if(a=="entry")
        {
            m[a1].push(1);
            if(m[a1].size()>1){cout<<a1<<" entered (ANOMALY)\n";m[a1].pop();}
            else cout<<a1<<" entered\n";
        }else
        {
            if(m[a1].empty())
                cout<<a1<<" exited (ANOMALY)\n";
            else
            {
                cout<<a1<<" exited\n";
                m[a1].pop();
            }

        }
    }
    return 0;
}
