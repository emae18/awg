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
const  string g="ACTG";
//A=65 a Z=90
void cambiar(string a, int &cont)
{

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    string a,s,c;
    cin>>a;
    int i=0,j=3;
    int cont=0;
    set<int> s;
    while(j<a.size())
    {
        string k;
        forin(z,j+1)k+=a[z];
        cambiar(k,cont);
        i++;j++;
        s.insert(cont);
        cont=0;
    }

    return 0;
}
