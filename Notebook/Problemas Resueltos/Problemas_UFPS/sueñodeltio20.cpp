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
ll d,m,d1,n,d2;
bool res(string cad,int i)
{
    if((cad[i-2]!=cad[i-1] && cad[i-1]==cad[i] &&
       cad[i]==cad[i+1] && cad[i+1]!=cad[i+2])
       || (cad[i-2]==cad[i-1] && cad[i-1]==cad[i] &&
       cad[i]==cad[i+1] && cad[i+1]==cad[i+2]))return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long k,p;
    cin>>k>>p;long long cont=1;
    while(k<p)
    {
        k+=pow(cont,2);
        p+=cont;
        cont++;
    }
    cout<<cont-1<<"\n";
    return 0;
}
