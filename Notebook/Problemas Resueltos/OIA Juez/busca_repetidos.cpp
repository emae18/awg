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
    int aux=-1;
    vi v; bool band=false;
    while(aux!=0)
    {
        cin>>aux;
        if(v.size()){
            if(find(v.begin(),v.end(),aux)!=v.end())band=true;
        }
        v.push_back(aux);
    }
    cout<<((band)?"Hay repetidos\n":"No hay repetidos\n");
    return 0;
}
