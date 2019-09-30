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
    ifstream cin("antivirus.in");
    ofstream cout("antivirus.out");
    int a;
    cin>>a;string k;
    char x,z;
    cin>>x>>z;
    cin>>k;string aux="";
    forin(i,a)
    {
        if(k[i]==x && k[i+1]==z && k[i+2]==x){aux+=k[i];i++;}
        else aux+=k[i];
    }
    cout<<aux.size()<<"\n"<<aux<<"\n";
    return 0;
}
