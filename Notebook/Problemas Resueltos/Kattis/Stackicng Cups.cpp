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
unsigned long long calc(unsigned long long a,unsigned long long b,unsigned long long c)
{
    unsigned long long d=min(a,min(b,c));
    unsigned long long x=(a*a)+(b*b)+(c*c)+(7*d);
    return x;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; string a,b;
            map<int,vector<string>> m;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;int k;string c;
        if(isdigit(a[0]))
        {
            k=std::stoi(a)/2;
             c=b;
        }
        else { k=std::stoi(b); c=a;}
        m[k].push_back(c);
    }
    for(map<int,vector<string>>::iterator x=m.begin();x!=m.end();x++)
    {
        for(auto i : x->second)
        {
            cout<<i<<"\n";
        }
    }
    return 0;
}

