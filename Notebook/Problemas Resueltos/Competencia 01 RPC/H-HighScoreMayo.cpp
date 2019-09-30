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
    unsigned long long a,b,c,d;
    vector<unsigned long long> v(3,0);
    forin(i,n)
    {
        forin(k,3)cin>>v[k];
        cin>>d;
        set<unsigned long long> s;
        forin(k,3)
        {
            if(k==0)
                s.insert(calc(v[0]+d,v[1],v[2]));
            else if(k==1)
                s.insert(calc(v[0],v[1]+d,v[2]));
            else if(k==2)
                s.insert(calc(v[0],v[1],v[2]+d));
        }
        cout<<*s.rbegin()<<"\n";
        s.clear();
    }
    return 0;
}

