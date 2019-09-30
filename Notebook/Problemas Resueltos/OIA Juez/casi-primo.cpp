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
bool primo[100000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c;
    //ifstream cin("casi-primo.in");
    //ofstream cout("casi-primo.out");
    cin>>a>>b>>c;int cont=0,con=0;
    for(int i=2;i<b;i++)primo[i]=true;
    for(int i=2;i<c;i++)
    {
        for(int j=2;i*j<b;j++)
        {
            primo[i*j]=false;
        }
    }
    for(int i=a;i<=b;i++)
    {
        if(primo[i])cont++;
    }
    cout<<cont<<"\n";
    return 0;
}
