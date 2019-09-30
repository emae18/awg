#include<bits/stdc++.h>
//template Emae
#define forin(i,n) for(int i=0;i<n;i++)
#define forisn(i,s,n) for(int i=s;i<n;i++)
#define nforin(i,n) for(int i=n;i>-1;i--)
#define mostrar(x,s) for(auto x : s)
#define all(v) v.begin(),v.end()
//loops and more
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef set<int>::iterator itsi;
typedef map<string,int>::iterator itmsi;
//solve
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char a;string b;
    string k="";
    while(cin>>a>>b)
    {
        if(a=='0' && b=="0")break;
        set<char> s;
        forin(i,b.size())
        {
            if(b[i]!=a)
            {k+=b[i];
                s.insert(b[i]);
            }
        }
        if(k.size()==0 || s.size()==1 )cout<<0<<"\n";
        else{
            cout<<k<<"\n";
            k="";
        }
    }
    return 0;
}
