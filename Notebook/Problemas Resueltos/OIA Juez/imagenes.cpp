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
bool isPal(string a)
{
    forin(i,a.size())
        if(a[i]!=a[a.size()-1-i])return false;
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a;
    //cin.ignore();
    //getline(cin,b);
    map<char,int> m;string aux="",aux2="";int ii;
    forin(i,a.size())
    {
       // if(i+4==a.size())break;
        m[a[i]]++;
        if(m[a[i]]>4 && a[i]!=a[i+1])
        {
            aux+="{";
            forin(j,m[a[i]]){aux+=a[i];a[i]--;}
            aux+="}";
            ii=i;
            aux2.erase(0,i+1);
            aux+=aux2;
        }
        aux2+=a[i];

    }
    cout<<aux<<" \naaaa: "<<aux2<<"\n"<<b;
    return 0;
}
