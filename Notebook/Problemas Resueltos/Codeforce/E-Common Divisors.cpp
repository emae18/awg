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

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin>>a>>b;
    if(b.size()>a.size())
    {
        string aux=a; a=b;b=aux;
    }
    int cont=0;
    size_t x;
    while(a.find(b)!=string::npos)
    {
        x=a.find(b);
        a.erase(x,b.size());
        cont++;
    }
    if(cont==0){cout<<0<<"\n";return 0;}
    cout<<cont<<"\n";
    return 0;
}

