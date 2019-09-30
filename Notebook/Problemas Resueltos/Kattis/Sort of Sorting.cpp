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
bool comp(string a,string b)
{
    if(a[0]==b[0])
           return a[1]<b[1];
        return a[0]<b[0];

}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=3;
    while(cin>>n)
   {
        if(n==0)break;
        vector<string> v(n);
        forin(i,n)cin>>v[i];
        stable_sort(v.begin(),v.end(),comp);
        forin(i,n)cout<<v[i]<<"\n";
        cout<<"\n";
   }
    return 0;
}

