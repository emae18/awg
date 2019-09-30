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

vector<bool> pm(50001,true);
void criba(int n)
{
    pm[0]=false;
    pm[1]=false;
    for (int p=2; p*p<=n; p++)
    {
        if (pm[p])
        {
            for (int i=p*2; i<=n; i += p)
                pm[i] = false;
        }
    }
}
bool isRisk(int x,int k)
{
    while(x>k || pm[x]==false)
    {
        int i=2;
        while(x%i!=0){
            i++;
            if(i==k){i--;break;}
        }
        x=x/i;
    }
    return pm[x];

}

// crer vectores con el mayor primo cercano 
// ordenarlos
// precalcular
// Segment Tree
// Persistencia

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int q,n,k;
    cin>>q;
    criba(q);
    int cont;
    while(q--)
    {
        cin>>n>>k;
        cont=0;
        for(int i=2;i<=n;i++)
            if(isRisk(i,k))cont++;
        cout<<cont<<"\n";
    }
    return 0;
}
