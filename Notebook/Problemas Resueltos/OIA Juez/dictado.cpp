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
int dictado(string a)
{
        int cont=0;
        set<char> s;
        string aux=a;bool band=false;
        forin(i,a.size()-1)s.insert(a[i]);
        while(!isPal(a) && !band)
        {
            for(auto x : s)
            {
                aux+=x;
                if(isPal(aux)){band=true;break;}
                else {
                    if(isPal(aux))
                }
            }
            cont++;
        }
        return cont;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a;
    cin>>a;
    cout<<dictado(a)<<"\n";
    return 0;
}
