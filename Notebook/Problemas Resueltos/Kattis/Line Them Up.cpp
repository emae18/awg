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
    int n;
    cin>>n;
    vector<string> v(n); bool dec=true,asc=true,no=false;
    forin(i,n)
    {
        cin>>v[i];
    }
    forin(i,n)
    {
        if(i>0)
        {
            if((v[i]<v[i-1] )|| (v[i]==v[i-1])){asc=false;}
            else if((v[i]>v[i-1] )|| (v[i]==v[i-1])){dec=false;}
        }
    }
    if(dec && !asc) cout<<"DECREASING\n";
    else if (!dec && asc)cout<<"INCREASING\n";
    else cout<<"NEITHER\n";
    return 0;
}

